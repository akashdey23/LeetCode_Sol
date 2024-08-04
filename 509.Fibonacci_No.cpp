//category:- easy and conceptual
//approach:- if 1 or less than 1 then return n. and then two variables last and slast and simple add them..
//palindrome number:- sum of previous two palendrome number
//TC:- 2^n


class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int last = fib(n-1);
        int slast = fib(n-2);
        return last+slast;
    }
};
