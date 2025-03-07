class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int n = nums.size();
        if(n == 1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int low = 1,high = n-2;

        while(low<=high){
            int mid = low + (high-low)/2;
            int prev = nums[mid-1];
            int next = nums[mid+1];
            if(nums[mid]>next && nums[mid]>prev) return mid;
            else if(nums[mid]<next) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};