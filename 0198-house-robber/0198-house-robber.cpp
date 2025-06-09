class Solution {
public:
    int dp[101];
    int helper(int i,vector<int>arr){
        if(i>=arr.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(helper(i+1,arr),arr[i]+ helper(i+2,arr));
    }
    int rob(vector<int>& nums) {
       int ans = 0;
       memset(dp,-1,sizeof(dp));
       for(int i =0;i<nums.size();i++){
        ans = max(ans,helper(i,nums));
       }
       return ans;
    }
};