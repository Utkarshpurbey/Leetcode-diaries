class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]== 0){
                int nextNonZero = i;
                for(int j = i+1;j<n;j++){
                    if(nums[j]!= 0){
                        nextNonZero = j;
                        break;
                    }
                }
                swap(nums[i],nums[nextNonZero]);
            }
        }
        
    }
};