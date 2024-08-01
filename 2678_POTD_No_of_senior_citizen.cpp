//category:- easy
//array and string level question



class Solution {
public:
    int countSeniors(vector<string>& details) { //A reference to a vector of strings, where each string contains details about an individual.
        int seniorCount = 0;
        for (const string& info : details) {
            char tens = info[11]; //extracting tens and once digit
            char ones = info[12];
            if (tens > '6' || (tens == '6' && ones > '0')) { //60+ condition
                seniorCount++;
            }
        }
        return seniorCount;
    }
};
