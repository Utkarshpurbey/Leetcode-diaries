class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            sum+=nums[i];
        }
        vector<int>left(n,0);
        vector<int>right(n,0);
        int ans = -1;

        for(int i =0;i<n;i++){
            left[i] = i ==0 ? 0 : left[i-1]+nums[i-1];
            right[i] = i ==0 ? sum - nums[i] : right[i-1] - nums[i];
        }
        for(int i=0;i<n;i++){
            if(left[i] == right[i]){
                ans =i;
                break;
            }
        }
    
    return ans;
        
    }
};