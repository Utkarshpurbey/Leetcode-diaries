class Solution {
public: 
    int dp[31];
    int solve(int i){
        if(i<=1) return i;
        if(dp[i]!= -1) return dp[i];
        return dp[i] =  solve(i-1) + solve(i-2);
    }
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};