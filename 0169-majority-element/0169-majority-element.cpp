#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& arr) {
    //size of the given array:
    int n = arr.size();
    //declaring a map:
    map<int, int>mp;
 

    //storing the elements with its occurnce:
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    
    //searching for the majority element:
    for(auto it : mp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;
}
};