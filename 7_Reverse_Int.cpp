//category:- easy and conceptual

class Solution {
public:
    int reverse(int x) {
        int r = 0; //declaring r here 
        while(x){
            int lastDigit = x % 10; // extracting the last digit
            // count = count + 1;
            r = (r * 10) + lastDigit; //concept here :- extracted number = (extracted number  * 10) + lastDigit
            x = x/10; //next integer finding and updating the value of x
        }
        if(r>INT_MAX || r<INT_MIN) return 0; //Here returns 0 if the int region goes beyond the range given
    return r; // return r;
    }
};
