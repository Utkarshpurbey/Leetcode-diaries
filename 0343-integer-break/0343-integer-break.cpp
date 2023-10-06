class Solution {
public:

    int helper(int i,int k){
        int num = i/k;
        int rem = i%k;
        return pow(num+1,rem) * pow(num,k-rem);
    }
    int integerBreak(int n) {
      int ans =1;
      for(int i =2;i<n;i++){
          ans = max(ans,helper(n,i));
      }
      return ans;
    }
};