class Solution {
public:
    int helper(int i,vector<int>arr,vector<int>&dp){
        if(i>=arr.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int oneStep = arr[i] + helper(i+1,arr,dp);
        int twoStep = arr[i] + helper(i+2,arr,dp);
        return dp[i] = min(oneStep,twoStep);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        return min(helper(0,cost,dp),helper(1,cost,dp));;
    }
};