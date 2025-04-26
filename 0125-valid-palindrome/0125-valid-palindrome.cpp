class Solution {
public:
    bool isPalindromeString (string s){
        int l = 0;
        int n = s.size();
        int h = n-1;
        while(l<h){
            if(s[l]!=s[h]) return false;
            l++;h--;
        }
        return true;
    }
     string convertToLower(string s){
       int n = s.size();
        string temp;
        for(int i = 0; i < n; i++){
            if(isalnum(s[i])){
                temp += tolower(s[i]);
            }
       }
       return temp;
    }

    bool isPalindrome(string s) {
        string reverse = convertToLower(s);
        cout<<reverse;
        return isPalindromeString(reverse);
    }
};