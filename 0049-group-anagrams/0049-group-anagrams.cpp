class Solution {
public:
    // string returnSorted(string s){
    //     string temp =s;
    //     return sort(temp.begin(),temp.end());
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>mp;
        int n = strs.size();

        for(int i =0;i<n;i++){
            string temp = strs[i];
            sort(begin(temp),end(temp));
            mp[temp].push_back(strs[i]);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};