class Solution {
public:
    int bruteForce(vector<int>arr){
        int ans = arr[0];
        for(int i:arr){
            ans = min(i,ans);
        }
        return ans;
    }
    int findMinBs(vector<int>arr){
        int n = arr.size();
        int low = 0,high = n-1;
        int ans = INT_MAX;
        
        while(low<=high){
           int mid = low + (high-low)/2;
           if(arr[low]<=arr[mid]){
            // left side is sorted 
            ans = min(ans,arr[low]);
            low = mid + 1;
           }else{
            // right side is sorted
            ans = min(ans,arr[mid]);
            high = mid-1;
           }
        }
        return ans;
    }
    
    int findMin(vector<int>& nums) {
        return findMinBs(nums);
    }
};