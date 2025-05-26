class Solution {
public:
    void helper(int i ,int n,int curr_sum,int target,vector<int>arr,vector<int>temp,vector<vector<int>>&ans){
        if(i>=n || curr_sum == target ){
            if(target == curr_sum){
                ans.push_back(temp);
            }
            return;
        }
        if(curr_sum + arr[i] <= target){
            temp.push_back(arr[i]);
            curr_sum+=arr[i];
            helper(i,n,curr_sum,target,arr,temp,ans);
            temp.pop_back();
            curr_sum-=arr[i];
        }
        helper(i+1,n,curr_sum,target,arr,temp,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n = candidates.size();
        helper(0,n,0,target,candidates,{},ans);
        return ans;
    }
};