class Solution {
public:
    bool isNumOdd(char a){
        return (a-'0')%2==1;
    }
    string largestOddNumber(string nums) {
        string ans = "";
        int n = nums.size();
        bool hasFoundOdd = false;
        for(int i = n-1;i>=0;i--){
            if(hasFoundOdd){
                ans+=nums[i];
            }else{
                if(isNumOdd(nums[i])){
                    ans+=nums[i];
                    hasFoundOdd= true;
                }
            }
        }
      reverse(ans.begin(),ans.end());
        return ans;
    }
};