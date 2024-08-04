//armstrong number
//category medium
//3 steps:-
// ek baar aage se suru krna hai fir ek baar piche se i-- start and end bol skte hai dono ko ..
//  allnumerical ni hoga toh start++ and end-- . 2 loop chalega return true (continue)
// lowercase wala condition :- lower case and upper case aajaye toh return false. 
//  agar koi conditon ni hai  toh start++ and end--; bss kaatammmm
// while loop se bahar return true.. aur start ka value initialize krdena 0 se.



class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<=end){
            if(!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if(!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end]))
            {
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
