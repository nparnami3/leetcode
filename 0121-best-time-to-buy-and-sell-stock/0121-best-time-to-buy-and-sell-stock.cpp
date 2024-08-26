class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int mini = arr[0];
        int profit = 0;
        int net_profit = 0;
        for(int i = 1; i < n; i++){
            net_profit = arr[i] - mini;
            profit = max(net_profit, profit);
            mini = min(mini, arr[i]);
        } 
        return profit;
    }
};