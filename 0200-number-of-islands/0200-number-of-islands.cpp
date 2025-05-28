class Solution {
public:

    // dfs -- > i,j we will traverse in each direction and if 
    // it is '0 then we have to return
    // it is getting out of bound --> returm 
    // already visited then return 
    // mark the grid visited and call the dfs in each direction 
    vector<vector<int>> direction = {{-1,0},{0,1},{1,0},{0,-1}};

    void dfs(int i , int j , vector<vector<int>> &visited,vector<vector<char>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || j<0) return;
        if(i>=n || j>=m) return;
        if(grid[i][j] != '1') return;
        if(visited[i][j] == 1) return;

        // valid 1 mark it and call dfs for that i,j
        visited[i][j] = 1;

        for(auto it:direction){
            int newI = i + it[0];
            int newJ = j + it[1];
            dfs(newI,newJ,visited,grid);
        }
    }


    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int count = 0;

        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == '1'  && visited[i][j] == 0){
                    dfs(i,j,visited,grid);
                    count++;
                }
            }
        }

        return count;

    }
};