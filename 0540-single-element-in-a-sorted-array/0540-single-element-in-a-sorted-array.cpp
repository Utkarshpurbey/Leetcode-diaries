class Solution {
public:
    bool isEven(int x) {return x%2==0;}
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size(); 
       int low = 0, high = n-1;
       if(n==1) return nums[0];

       while(low<=high){
        int mid = low + (high-low)/2;
        int prev = (mid + n -1)%n;
        int next = (mid +1)%n;
        if(nums[mid]!=nums[prev] && nums[mid]!=nums[next]) return nums[mid];
            if(isEven(mid)){
                // Even index
                if(nums[mid]==nums[prev]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(nums[mid]== nums[next]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
       }
       return 0;
    }
};