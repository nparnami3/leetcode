class Solution {
public:
//Optimal Approach:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
     //applying the algorithm:
        int count = 0;
        int ele;
        for(int i = 0; i < n; i++){
            if(count == 0){
                count=1;
                ele = arr[i];
            }
            else if(ele == arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
          //checking if the stored element
         // is the majority element:
        int count1=0;
        for(int i = 0; i < n; i++){
            if(arr[i] == ele ){
                count1++;
            }
        }

        if(count1 > (n/2)) return ele;
        
        return -1;
    }
};