//GFG 

class Solution {
  public:
    string armstrongNumber(int n) {
        int dup = n;
        int sum = 0;
        while(n!=0)
        {
            int lastDigit = n % 10;
             sum = sum + pow(lastDigit,3);
            n  = n/10;
        }
            if(sum == dup){
                return "true";
            }
            else{
                return "false";
            }
    }
};
