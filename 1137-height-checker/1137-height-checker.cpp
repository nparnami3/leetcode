class Solution {
public:
    int heightChecker(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(), ans.end());
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] != ans[i]){
                count++;
            }
        }
        return count;
    }
};