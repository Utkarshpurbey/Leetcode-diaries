class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int curr_sum = arr[0];
        int max_sum = curr_sum;
        int n = arr.size();

        for(int i =1;i<n;i++){
            curr_sum = max(arr[i],curr_sum+arr[i]);
            max_sum = max(max_sum,curr_sum);
        }
        return max_sum;
    }
};