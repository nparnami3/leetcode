class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         int n = nums.size();
    int64_t maxVal = 0;

    for (int j = 1; j < n - 1; ++j) {
        int maxLeft = 0;
        int maxRight = 0;

        for (int i = 0; i < j; ++i) {
            maxLeft = max(maxLeft, nums[i]);
        }

        for (int k = j + 1; k < n; ++k) {
            maxRight = max(maxRight, nums[k]);
        }

        int64_t value = (int64_t)(maxLeft - nums[j]) * maxRight; // Use int64_t
        maxVal = max(maxVal, value);
    }

    return maxVal;
    }
};