class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
          int m = rolls.size();
    int total_sum = mean * (m + n);
    int current_sum = accumulate(rolls.begin(), rolls.end(), 0);
    int missing_sum = total_sum - current_sum;

    // If the missing sum cannot be distributed evenly among 'n' rolls with values between 1 and 6
    if (missing_sum < n || missing_sum > 6 * n) {
        return {}; // Return an empty vector if no valid solution
    }

    vector<int> result(n, missing_sum / n);  // Initialize with the average value
    int remainder = missing_sum % n;         // Calculate the remainder

    // Distribute the remainder across the result
    for (int i = 0; i < remainder; ++i) {
        result[i]++;
    }

    return result;
    }
};