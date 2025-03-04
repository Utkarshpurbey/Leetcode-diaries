class Solution {
public:
    
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]== target) return true;
            if(arr[mid] == arr[low] && arr[high] == arr[mid]){
                low++;high--;
                continue;
            }
            if(arr[low]<=arr[mid]){
                // left sorted
                if(arr[low]<=target && target<=arr[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                //right side sorted
                if(arr[mid]<=target && target<=arr[high]){
                    low = mid + 1;
                }else{
                    high = mid-1;
                }
            }
        }
        return false;
        
    }
};