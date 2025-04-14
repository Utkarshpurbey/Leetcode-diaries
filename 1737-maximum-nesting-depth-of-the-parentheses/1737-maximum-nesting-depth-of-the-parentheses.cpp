class Solution {
public:
    int maxDepth(string s) {
        char open = '(',close = ')';
        int count  = 0,i = 0,ans =0;
        int n = s.size();

        while(i<n){
            if(s[i] == open){
                count++;
            }else if(s[i]== close){
                count--;
            }
            ans = max(ans,count);
            i++;
        }
        return ans;
    }
};