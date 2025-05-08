class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();
        int res = 0;
        for(int i=0; i<n; i++){
            res = res ^ arr[i];
        }
        return res;
    }
};