class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high){
            //rule-1
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            //rule-2
            else if(arr[mid] == 1) mid++;
            //rule-3
            else {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};