class Solution {
public:
    vector<vector<string>> result;
    int N;
    unordered_set<int> column;
    unordered_set<int> dia;
    unordered_set<int> antiDia;
    void solve(vector<string> &board, int row) {
        if (row >= N) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < N; col++) {
            int diaConstant = row+col;
            int antiDiaConstant = row-col;

            // check is Safe
            if(column.find(col)!=column.end() ||dia.find(diaConstant)!=dia.end() || antiDia.find(antiDiaConstant)!=antiDia.end() ){
                continue;
            }

            // safer position 
              board[row][col] = 'Q';  // place the queen;
              // update the sets 
              column.insert(col);
              dia.insert(diaConstant);
              antiDia.insert(antiDiaConstant);
              // ask recursion to find more options
              solve(board, row + 1);
              // undo the changes its your responsibility 
              board[row][col] = '.';
              column.erase(col);
              dia.erase(diaConstant);
              antiDia.erase(antiDiaConstant);
        }  
    }
    vector<vector<string>> solveNQueens(int n) {
        N= n;
        vector<string>board(n,string(n,'.'));
        solve(board,0);
        return result;
    }
};