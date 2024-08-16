//easy and 
// first collect the sum of given array numbers and then collect the sum of n numbers 
// solve by using int missingNum = actualSum- sum;
//return it



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum  = sum+nums[i];
        }
        int actualSum = (nums.size()*(nums.size()+1))/2;
        int missingNum = actualSum- sum;
        return missingNum;
    }
};
