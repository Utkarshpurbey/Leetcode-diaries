class Solution {
public:
void helper(int i , vector<int>arr,vector<int>temp,vector<vector<int>>&ans){
        if(i >=arr.size()){
            ans.push_back(temp);
            return;
        }
        
        // include
        temp.push_back(arr[i]);
        helper(i+1,arr,temp,ans);
        temp.pop_back();
        while(i+1<arr.size() && arr[i] == arr[i+1]) i++;
        helper(i+1,arr,temp,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>ans;
        // helper
        sort(nums.begin(),nums.end());
        helper(0,nums,{},ans);
        return ans;
    }
};