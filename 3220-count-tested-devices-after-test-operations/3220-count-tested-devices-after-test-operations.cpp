class Solution {
public:
//OPTIMAL SOLLUTION
    int countTestedDevices(vector<int>& arr) {
        int check=0; // to check
        int ans=0;
        int n =arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] > check){
                ans++;
                check++;
            }
        }
        return ans;
    }
};