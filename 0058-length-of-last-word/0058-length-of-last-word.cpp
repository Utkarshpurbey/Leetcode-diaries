class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastWord ="";
        int n = s.size();
        int i = n-1;
        while(s[i] == ' '){

            i--;
        }
        while(i>=0){
           if(isalpha(s[i])){
            lastWord+=s[i];
           }else if(s[i] == ' '){
            break;
           }
           i--;
        }
       return lastWord.size();
    }
};