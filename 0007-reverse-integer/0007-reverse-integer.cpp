class Solution {
public:
    int reverse(int x) {
      if(x == 0) return x;
      int rev = 0;
      int temp;
      bool neg = false;

      if(x<0){
        x = abs(x); // neg -> positive
        neg = true;
      }  
      //remove trailing zeroes:
      while(x%10 == 0){
        x/=10;
      }

      //reverse a num :
      while (x != 0){
        if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;

        temp = x%10;
        rev = rev * 10 + temp;
        x/=10;
      }
      if(neg) rev = -rev;

      return rev;
    }
};