class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
    if (n < 3) return 0;

    vector<int> prefixMax(n, 0), suffixMax(n, 0);

    // Compute prefix max (max nums[i] for i < j)
    prefixMax[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i - 1], nums[i]);
    }

    // Compute suffix max (max nums[k] for k > j)
    suffixMax[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffixMax[i] = max(suffixMax[i + 1], nums[i]);
    }

    int64_t maxValue = 0; // Use int64_t to prevent overflow

    // Iterate over middle element nums[j]
    for (int j = 1; j < n - 1; j++) {
        int leftMax = prefixMax[j - 1]; // Max nums[i] for i < j
        int rightMax = suffixMax[j + 1]; // Max nums[k] for k > j
        if (leftMax > nums[j]) {
            maxValue = max(maxValue, (int64_t)(leftMax - nums[j]) * rightMax);
        }
    }

    return maxValue; 
    }
};