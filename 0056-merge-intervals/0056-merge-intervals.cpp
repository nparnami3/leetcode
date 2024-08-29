class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end()); // 1st step
        vector<vector<int>>ans; //stroing in extra matrix
        for(int i=0;i<n;i++){
            int start = arr[i][0]; //(1,3) => 1
            int end = arr[i][1]; // (1,3) => 3
            if(!ans.empty() && end <= ans.back()[1]){
                continue; // value is overlapping
            }
            for(int j= i+1; j<n; j++){
                if(arr[j][0] <= end){ //(2,6) is overlapping in (1,3)
                    end = max(end, arr[j][1]); //new interval = (1,6)
                }
                else{
                    break;
                }
            }
            ans.push_back({start, end});
        }


        return ans;
    }
};