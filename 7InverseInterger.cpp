class Solution {
public:
    int reverse(int x) {
      //Notice on int32 boarder
        int rev = 0;
        while(x != 0){
          int pop = x % 10;
          x /= 10;
          int MAXTEMP = INT_MAX / 10;
          int MINTEMP = INT_MIN / 10;
          if(rev > MAXTEMP || (rev == MAXTEMP && pop > 7)) return 0;
          if(rev < MINTEMP || (rev == MINTEMP && pop < -8)) return 0;
          rev = rev * 10 + pop;
        }
        return rev;
    }
};
