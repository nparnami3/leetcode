class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit = 0;
        int mini = prices[0];
        for(int i=1;i<n;i++){
            int profit=prices[i]-mini;
            max_profit = max(max_profit, profit);
            mini = min(mini,prices[i]);
        }
        return max_profit;
    }
};