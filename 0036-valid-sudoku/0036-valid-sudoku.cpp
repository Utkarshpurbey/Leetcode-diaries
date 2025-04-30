class Solution {
public:
    bool isValidCell(int x,int y,vector<vector<char>>& board){

        // 4,1
        char curr_ele = board[x][y];
        for(int i =0;i<9;i++){
            // found that element 
            if(board[i][y] == curr_ele && i!=x){
                return false;
            }
        }
        //column
          for(int j =0;j<9;j++){
            // found that element 
            if(board[x][j] == curr_ele && j!=y){
                return false;
            }
        }
        int intX = x/3,intY = y/3;
        int sX = intX*3,sY = intY*3;
        for(int i =sX;i<sX+3;i++){
            for(int j = sY;j<sY+3;j++){
                if(board[i][j] == curr_ele &&  (i != x && j != y)){
                    return false;
                }
            }
        }

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
               if(board[i][j] != '.' && !isValidCell(i,j,board)){
                return false;
               }
            }
        }
        return true;
    }
};