class Solution {
public:
    int mySqrt(int n) {
        int low =0 , high = n-1;
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            int item = mid + 1;
            if(item<=n/item){
                ans = max(ans,item);
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
       return ans;
    }
};