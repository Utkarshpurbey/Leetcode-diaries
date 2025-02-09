class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
       int maxOnes = 0;
       int ans = 0;
       for(auto i:arr){
           if(i == 1){
            maxOnes++;
            ans = max(ans,maxOnes);
           } else {
            maxOnes =0;
           }
       } 
       return ans;
    }
};