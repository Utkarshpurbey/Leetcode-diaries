class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string temp;
        int m = s[0].size();
        int n = s.size();
        for(int i = 0;i<m;i++){
            int curr_char = s[0][i];
            int j = 0;
            int count = 0;
            while(j<n){
                if(s[j][i] == curr_char){
                    count++;
                }
                j++;
            }
            if(count == n){
                temp+=curr_char;
            }else{
                break;
            }
        }
        return temp;
    }
};