class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int left = m-1; 
        int right = 0;
        int index = m;
        //STEP-1 : SWAPPING
        while(left >= 0 && right < n){
            if(arr1[left] > arr2[right]){
                swap(arr1[left], arr2[right]);
                left--; right++;
            }
            else{
                break; //all the remaining are in the correct fashion
            }
        }
        for(int i=0; i<n;i++){
            swap(arr1[index], arr2[i]);
            index++;
        }
        // STEP-2 : SORTING 
        sort(arr1.begin(), arr1.end());
        // sort(arr2.begin(), arr2.end());


    }
};