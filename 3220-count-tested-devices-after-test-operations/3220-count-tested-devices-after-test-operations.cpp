class Solution {
public:
//BRUTE FORCE
    int countTestedDevices(vector<int>& arr) {
        int n = arr.size();
        int count=0;
        // int i = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0) {
                continue;
            }
            else if(arr[i] > 0){
                count++;
                for(int j=i+1; j<n; j++){
                    if(arr[j] == 0) continue;
                    else{
                    arr[j]= arr[j]-1;
                    } 
                }
            }
        }
        return count;
    }
};