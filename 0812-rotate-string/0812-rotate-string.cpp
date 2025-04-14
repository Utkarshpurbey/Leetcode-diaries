class Solution {
public:
    string oneShift(string s){
        int n = s.size();
        char first_char = s[0];
        for(int i = 1;i<n;i++){
            s[i-1] = s[i];
        }
        s[n-1] = first_char;
        return s;
    }
    bool rotateString(string s, string goal) {
       int n = s.size();
       string s1 = s;
       for(int i =0;i<n;i++){
        string temp = oneShift(s1);
        if(temp == goal) return true;
        s1 = temp;
       }
       return false;
    }
};