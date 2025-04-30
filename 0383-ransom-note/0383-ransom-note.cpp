class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        int n = ransomNote.size();
        int m = magazine.size();
        // stored the element in the haspmap
        for(int i =0;i<m;i++){
            mp[magazine[i]]++;
        }

        for(int i =0;i<n;i++){
            if(mp.find(ransomNote[i])!=mp.end() && mp[ransomNote[i]]>0){
                mp[ransomNote[i]]--;
            }else return false;
        }
        return true;
    }
};