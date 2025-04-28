class Solution {
public:
    bool isMatching(char a, char b){
        return (a == '(' && b == ')') || (a == '[' && b == ']')|| (a == '{' && b == '}');
    }
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for(int i = 0;i<n;i++){
            char curr_char = s[i];
            if(curr_char == '(' || curr_char == '[' || curr_char == '{'){
                st.push(curr_char);
            }else{
                if(st.empty()){
                    return false;
                }
                if(!isMatching(st.top(),s[i]))
                {
                    return false ;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};