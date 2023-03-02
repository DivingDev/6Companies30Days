// Q2 Accepted

// https://leetcode.com/problems/combination-sum-iii/submissions/870640957/

// this code is ans for the q3 last contest happen on leetcode.

// Code:-
/*
class Solution {
    private:
    void combination(int idx,vector<int> &v,int n,vector<vector<int>> &ans,vector<int> &ds,int k)
    {
        if(idx==v.size())
        {
            if(n==0 && k==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(v[idx]<=n)
        {
            ds.push_back(v[idx]);
            combination(idx+1,v,n-v[idx],ans,ds,k-1);
            ds.pop_back();
        }
        combination(idx+1,v,n,ans,ds,k);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int>ds;
        combination(0,v,n,ans,ds,k);
        return ans;
    }
};
*/
