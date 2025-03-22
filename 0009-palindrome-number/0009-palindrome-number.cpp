class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;
        int digit;
        int num = x;
        int rev = 0;
        while(x != 0){
            digit = x % 10;

            if ((rev > INT_MAX/10 ) || (rev < INT_MIN/10)){
                return false;
            }
            rev = (rev*10) + digit;
            x = x/10;
        }
        if(rev == num) return true;
        else return false;
    }
};