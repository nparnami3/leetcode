class Solution {
public:
  //BETTER APPROACH
    void setZeroes(vector<vector<int>>& arr) {
       int m = arr[0].size(); //column
       int n = arr.size(); // row
       vector<int>row(n,0); //row vector
       vector<int>col(m,0); //col vector
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 0){
                row[i]=1;
                col[j]=1;
            }
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]) arr[i][j] = 0;
        }
       }
    }
};