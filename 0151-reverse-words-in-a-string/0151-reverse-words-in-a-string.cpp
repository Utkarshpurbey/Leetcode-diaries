class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string temp;
        for(int i =0;i<s.size();i++){
            if(s[i] == ' '){
                if(temp.size()>0){
                    ans.push_back(temp);
                    temp = "";
                }
            }else if(isalpha(s[i]) || isdigit(s[i])){
                temp+=s[i];
            }
        }
        if(temp.size()>0) {
            ans.push_back(temp);
            temp="";
        }
        reverse(ans.begin(),ans.end());

       int m = ans.size();
        for (int i = 0; i < m; i++) {
            if (i == m - 1) {
                temp += ans[i];
            } else {
                temp += ans[i] + " ";
            }
        }

        return temp;
    }
};