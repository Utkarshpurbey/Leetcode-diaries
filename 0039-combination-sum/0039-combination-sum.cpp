class Solution {
public:
    void helper(int i ,vector<int>arr ,int sum,int target,vector<int>temp,vector<vector<int>> &ans){
        if(i>=arr.size()){
            if(sum == target) ans.push_back(temp);
            return;
        }
        if(arr[i]+sum<=target){
            temp.push_back(arr[i]);
            sum+=arr[i];
            helper(i,arr,sum,target,temp,ans);
            temp.pop_back();
            sum-=arr[i];
        }
        helper(i+1,arr,sum,target,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        // call the helper function
        helper(0,candidates,0,target,{},ans);
        return ans;
    }
};