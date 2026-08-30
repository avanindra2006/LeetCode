class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r=0;r<9;r++){
            for (int c=0;c<9;c++){
                if (board[r][c]=='.'){continue;}
                for(int i=0;i<9;i++){
                    if(i!=c && board[r][c] == board[r][i]){return false;}
                    if(i!=r && board[r][c] == board[i][c]){return false;}
                }
                int sr = r/3*3;
                int sc = c/3*3;
                for(int i=sr;i<sr+3;i++){
                    for(int j=sc;j<sc+3;j++){
                        if((i!=r || j!=c) && board[r][c] == board[i][j]){return false;}
                    }
                }
            }
        }
        return true;
    }
};