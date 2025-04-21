class Solution {
public:
  void helper(vector<int>arr,int i,int n,vector<int>temp,vector<vector<int>>&ans){
        if(i == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[i]);
        helper(arr,i+1,n,temp,ans);
        temp.pop_back();
        while(i+1<arr.size() && arr[i]==arr[i+1]) i++;
        helper(arr,i+1,n,temp,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        helper(nums,0,n,{},ans);
        return ans;
    }
};