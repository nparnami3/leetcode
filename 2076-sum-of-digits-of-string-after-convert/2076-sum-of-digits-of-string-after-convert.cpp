class Solution {
public:
    int getLucky(string s, int k) {
      int sum = 0;

        // Convert each character to its corresponding numerical value
        for (char ch : s) {
            int val = ch - 'a' + 1;
            // Convert the number to string to handle digits individually
            string val_str = to_string(val);
            for (char digit : val_str) {
                sum += digit - '0';
            }
        }
   // summing the values for k -1 times :
          for (int i = 1; i < k; ++i) {
            int new_sum = 0;
            while (sum > 0) {
                new_sum += sum % 10;
                sum /= 10;
            }
            sum = new_sum; // reassigning value to sum so that it can go again in for loop
        }

        return sum;
    }
};