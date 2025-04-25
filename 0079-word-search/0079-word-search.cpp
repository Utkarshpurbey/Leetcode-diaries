class Solution {
public:
    int n, m;

    bool explore(int index, int i, int j, vector<vector<char>>& board, string& word) {
        if (i < 0 || j < 0 || i >= n || j >= m) return false;
        if (board[i][j] == '!' || board[i][j] != word[index]) return false;
        if (index == word.size() - 1) return true;

        char temp = board[i][j];
        board[i][j] = '!';

        bool found = explore(index + 1, i - 1, j, board, word) ||
                     explore(index + 1, i + 1, j, board, word) ||
                     explore(index + 1, i, j - 1, board, word) ||
                     explore(index + 1, i, j + 1, board, word);

        board[i][j] = temp;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == word[0] && explore(0, i, j, board, word))
                    return true;
            }
        }
        return false;
    }
};
