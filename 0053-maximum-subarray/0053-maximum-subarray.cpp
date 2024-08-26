class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        int start = 0; // print subArray
        int ansEnd; // print subArray
        int ansStart=0; // print subArray
        int sum = 0; 
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == 0) start = i; // print subArray
            if(sum > maxi){
                maxi = sum;
                ansEnd = i; // print subArray
                ansStart = start; // print subArray
            }
            maxi = max(sum, maxi);
            if(sum < 0){
                sum = 0;
            }
        }
    return maxi;
    }
};