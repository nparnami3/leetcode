class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int k = 0;
        for(int i=0; i<n; i++){
            
            if(arr[i] == 1) count++;
            else if(i < n-1 && arr[i+1] == 1 && arr[i]==0){
                //arr[i] != 1
                count = 0;
            }
           k = max(k, count);
        }
        return k;
    }
};