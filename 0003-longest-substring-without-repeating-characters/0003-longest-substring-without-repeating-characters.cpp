class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left =0,right =0;
        int n = s.size();
        int ans = 0;

        while(right<n){
            if(mp.find(s[right])!=mp.end()){
                // Element found
                if(mp[s[right]]>=left){
                    left = mp[s[right]]+1;
                }
            }
                ans = max(ans,right-left+1);
                mp[s[right]] = right;
                right++;
            
        }
        return ans;
    }
};