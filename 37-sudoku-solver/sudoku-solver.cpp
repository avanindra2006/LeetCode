class Solution {
public:
    bool check_val(vector<vector<char>>& board, char ch, int rn, int cn){
        for(int i=0;i<9;i++){
            if(ch == board[rn][i]){return false;}
            if(ch == board[i][cn]){return false;}
        }
        int sr = rn/3*3;
        int sc = cn/3*3;
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(ch == board[i][j]){return false;}
            }
        }
        return true;
    }
    bool backtrack(vector<vector<char>>& board,vector<char>& chs, int rn, int cn){
        if(rn>8){return true;}
        if(cn>8){return backtrack(board,chs,rn+1,0);}
        if(board[rn][cn]!='.'){return backtrack(board,chs,rn,cn+1);}
        for(int i=0;i<9;i++){
            if(check_val(board,chs[i],rn,cn)){
                board[rn][cn]=chs[i];
                if(backtrack(board,chs,rn,cn+1)){return true;}
                board[rn][cn]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        vector<char> chs = {'1','2','3','4','5','6','7','8','9'};
        backtrack(board,chs,0,0);
        return;
    }
};