class Solution {
public:
    int computeSquareSum(int n){
        int ans =0;
        while(n>0){
            int digit = n%10;
            ans+=(digit*digit);
            n = n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        int temp = n;
        s.insert(temp);
        while(temp>0){
            int digitSquare = computeSquareSum(temp);
            if(digitSquare == 1) return true;
            if(s.find(digitSquare)!=s.end()){
                return false;
            }else{
                s.insert(digitSquare);
            }
            temp = digitSquare;
        }
        return false;
    }
};