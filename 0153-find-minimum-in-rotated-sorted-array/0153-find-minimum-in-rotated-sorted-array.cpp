class Solution {
public:
    int bruteForce(vector<int>arr){
        int ans = arr[0];
        for(int i:arr){
            ans = min(i,ans);
        }
        return ans;
    }
    int findMin(vector<int>& nums) {
        return bruteForce(nums);
    }
};