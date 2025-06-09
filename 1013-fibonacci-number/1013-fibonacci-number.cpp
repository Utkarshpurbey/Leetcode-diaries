class Solution {
public: 

    int fib(int n) {
        int prev2 =0, prev1 =1;
        if(n<=1) return n;
        int ans  =0;

        for(int i =2;i<=n;i++){
            ans = prev1 + prev2;
            prev2  = prev1;
            prev1 = ans;
        }
        return ans;
    }
};