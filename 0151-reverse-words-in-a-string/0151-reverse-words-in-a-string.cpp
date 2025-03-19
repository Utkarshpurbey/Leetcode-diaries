class Solution {
public:
  string reverseWords(string s) {
    int n = s.size();
    string ans;
    vector<string> words;
    string temp = "";

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            if (temp.size() > 0) {
                words.push_back(temp);
                temp = "";
            } else {
                continue;
            }
        } else {
            temp += s[i];
        }
    }

    if (temp.size() > 0) {
        words.push_back(temp);
        temp = "";
    }

    reverse(words.begin(), words.end());

    int m = words.size();
    for (int i = 0; i < m; i++) {
        if (i == m - 1) {
            ans += words[i];
        } else {
            ans += words[i] + " ";
        }
    }

    return ans;
}
};