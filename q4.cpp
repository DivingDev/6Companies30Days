// Accepted link
// https://leetcode.com/problems/rotate-function/submissions/871282022/

// code:-
/*
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum_nums = 0,function_sum = 0;
        
        for(int i=0;i<nums.size();i++){
            sum_nums += nums[i];
            function_sum += i*nums[i];
        }
        
        long long maximum = function_sum;
        int n = nums.size();
        
        for(int i= n-1;i>=0;i--)
        {
            function_sum += sum_nums -(nums[i]*n);
            maximum = max(function_sum,maximum);
        }
        return maximum;
    }
};
*/