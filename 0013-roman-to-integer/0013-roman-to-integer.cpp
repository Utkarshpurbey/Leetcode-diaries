class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        vector<char>symbol({'I','V','X','L','C','D','M'});
        vector<int>value({1,5,10,50,100,500,1000});
        int ans = 0;
        
        for(int i =0;i<symbol.size();i++){
            mp[symbol[i]] = value[i];
        }
        int n = s.size();
       
        for(int i =0;i<n;i++){
           if(i+1<n){
                if(mp[s[i+1]]>mp[s[i]]){
                    ans+=(mp[s[i+1]]-mp[s[i]]);
                    i++;
                }else ans+=mp[s[i]];
           }else ans+=mp[s[i]];
        }
        return ans;
    }
};