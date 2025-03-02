class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0,high = n-1;
        int ans = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                ans = mid;
                break;
            }else if(arr[mid]>target){
                high = mid-1;
            }else{
                low = mid +1;
            }
        }

        return ans == -1 ? low : ans;

    }
};