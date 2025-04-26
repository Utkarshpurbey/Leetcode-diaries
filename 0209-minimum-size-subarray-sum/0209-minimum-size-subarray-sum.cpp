class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
       int left = 0,right =0;
       int n  =arr.size();
       int ans = INT_MAX;
       int sum = 0;
       while(right<n){
            sum+=arr[right];
            while(sum>=target){
                ans = min(ans,right-left+1);
                sum-=arr[left];
                left++;
            }
           right++;
       }
       return ans ==INT_MAX ?0:ans;
    }
};