class Solution {
public:
    int arrangeCoins(int n) {
        int num = n;
        int i;
        for(i=1; i<=num; i++){
            if(n < i) return i-1;
            n = n - i;
        }
        return i-1;
    }
    
};