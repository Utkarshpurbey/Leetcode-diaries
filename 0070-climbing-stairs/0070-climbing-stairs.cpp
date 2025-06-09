class Solution {
public:
    int helper(int n,vector<int>&dp){
        if(dp[n]!=0) return dp[n];
        if(n<2) return dp[n]=1;
         dp[n] = helper(n-1,dp) + helper(n-2,dp);
         return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        return helper(n,dp);
    }
};