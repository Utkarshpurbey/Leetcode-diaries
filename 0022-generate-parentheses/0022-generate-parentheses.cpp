class Solution {
public:

    void helper(int open,int close,int n,string temp,vector<string>&ans){
        if(open >= n && close >= n){
            ans.push_back(temp);
            return;
        }
    if(open<n){
            temp+='(';
            helper(open+1,close,n,temp,ans);
            temp.pop_back();
    }

        if(open>close){
            temp+=')';
            helper(open,close+1,n,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        

        // recursive call 
        helper(0,0,n,"",ans);

        return ans;
    }
};