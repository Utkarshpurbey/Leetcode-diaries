class Solution {
public:
   string reverse(string s){
        int n = s.length();
        int i =0;
        while(i<n/2){
            swap(s[i],s[n-i-1]);
            i++;
        }
        return s;
    }

    string reverseWords(string s) {
        int n =s.length();
        string ans;
        string temp_word;
        for(int i =0;i<n;i++){
            if(s[i] != ' '){
               temp_word +=s[i];
            }else{
                ans += reverse(temp_word);
                ans += " ";
                temp_word = "";
            }
        }
        ans += reverse(temp_word);
        return ans;
    }
};