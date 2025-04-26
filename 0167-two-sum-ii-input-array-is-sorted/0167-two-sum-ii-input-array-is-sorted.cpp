class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;
        int n = arr.size();
        int low = 0;
        int high = n-1;

        while(low<=high){
            int sum = arr[low] + arr[high];
            if(sum == target){
                ans = {low+1,high+1};
                break;
            }else if(sum>target){
                high--;
            }else{
                low++;
            }
        }
        return ans;
    }
};