class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        vector<int>temp;
//BRUTE FORCE
        //STEP_1
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                temp.push_back(arr[i]);
            }
        }
        int m = temp.size();
        for(int i=0;i<m; i++){
            arr[i] = temp[i];
        }
        for(int i=m;i<n;i++){
            arr[i]=0;
        }
        
    }
};