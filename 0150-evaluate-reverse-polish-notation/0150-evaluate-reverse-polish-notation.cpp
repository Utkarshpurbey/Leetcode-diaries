
class Solution {
public:
    bool isOperand (string a){
        return a == "+" || a == "-" || a=="*" || a=="/";
    }
    int getInt (string s){
      return stoi(s);
    }
    int handleOperations(int a,int b, string operation){
        int ans;
        char local = operation[0];
        switch(local){
            case '+': ans = a+b; break;
            case '-': ans = a-b;break;
            case '*': ans = a*b;break;
            case '/': ans = a/b;break;
            default: ans =0;
        }
        return ans;
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i = 0;i<n;i++){
            string curr_char = tokens[i];
            if(isOperand(curr_char)){
                if(st.size()>1){
                    int a1 = st.top(); st.pop();
                    int a2 = st.top();st.pop();
                    int ans = handleOperations(a2,a1,curr_char);
                    st.push(ans);
                }
            }else{
                st.push(getInt(curr_char));
            }
        }
        return st.top();
       
    }
};