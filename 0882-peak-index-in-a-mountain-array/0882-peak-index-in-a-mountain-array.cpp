class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[n-1]>arr[n-2]) return n-1;
        int low = 1,high = n-2;

        while(low<=high){
            int mid = low + (high-low)/2;
            int prev = arr[mid-1];
            int next = arr[mid+1];
            if(arr[mid]>next && arr[mid]>prev) return mid;
            else if(arr[mid]<next) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};