class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int subArraySum = arr[0];
        int ans = subArraySum ;
        for(int i =1;i<n;i++){
            subArraySum = max(arr[i],subArraySum+arr[i]);
            ans = max(ans,subArraySum);
        }
        return ans;
    }
};