class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        reverse(arr.begin(),arr.end()-k);
        reverse(arr.end()-k, arr.end());
        reverse(arr.begin(),arr.end());
    }
};