// Accepted link
// https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/submissions/872056572/

// code:-
/*
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
       sort(nums.begin(), nums.end());
        sort(numsDivide.begin(), numsDivide.end());
        int count=0;
        int cmn=numsDivide[0];
        for(int i=1; i<numsDivide.size(); i++){
            cmn=__gcd(cmn, numsDivide[i]);
        }
        if(nums[0]>cmn)return -1;
        for(int i=0; i<nums.size(); i++){
            if(cmn%nums[i]==0){
                return count;
            }
            count++;
        }
        return -1; 
    }
};
*/