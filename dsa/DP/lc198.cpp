#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int rec(int start, int end, vector<int>& nums, vector<int>& dp)
    {
        if(start>end)
        {
            return 0;
        }
        else
        {
            if(dp[start] != -1)
            {
                return dp[start];
            }
            int x;
            x = max(nums[start]+rec(start+2, end, nums,dp) , rec(start+1, end, nums,dp));
            dp[start] = x;
            return x;
        }
    }

    int rob(vector<int>& nums) {
        vector <int> dp(nums.size(), -1);
        return rec(0, nums.size()-1,nums, dp);
    }
};