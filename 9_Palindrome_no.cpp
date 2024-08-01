//category : - easy
//similar like reversing digit and apply if else case..

class Solution {
public:
    bool isPalindrome(int x) {
    int dup = x;
    if (x < 0) {// for negative numbers always false
            return false;
        }
      long r = 0;
      while(x){
        int lastDigit  = x % 10;
        r = (r * 10) + lastDigit;
        x = x/10;
      }
      if(r>INT_MAX || r<INT_MIN)
        return 0;
      if(dup == r)
      {
        cout << "true";
      }      
      else
      {
        cout << "false";
      }
      return dup==r; //for 01 and 10 is always true 
    }
};
