class Solution {
public:
    void helper(int i, string digit,string temp, vector<string>&ans,     unordered_map<char,string>m){
        if(i == digit.size()){
          if(temp.size()>0){
              ans.push_back(temp);
          }
            return ;
        }
        for(int j =0;j<m[digit[i]].size();j++){
            temp+=m[digit[i]][j];
            helper(i+1,digit,temp,ans,m);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        // preparing data 
        unordered_map<char,string>m;
        vector<char> digit{'2','3','4','5','6','7','8','9'};
        vector<string> strings{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;

        for(int i =0;i<digit.size();i++){
            m[digit[i]] = strings[i];
        }
        // calling the recursion 

        helper(0,digits,"",ans,m);
        return ans;

    }
};