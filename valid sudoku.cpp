class Solution {
  public:
    bool is_safe(int i, int j, vector<vector<char>>& board)
    {
        for(int x=0; x<9; x++)
        {
            if((board[i][x] == board[i][j]  && x!=j) || (board[x][j] == board[i][j] && x!=i))
                return false;
        }
        int sub_row = 3 * (i/3);
        int sub_col = 3 * (j/3);
        for(int x=sub_row; x<sub_row+3; x++)
        {
            for(int y=sub_col; y<sub_col+3; y++)
            {
                if((board[x][y] == board[i][j]) && (i!=x || j!=y))
                    return false;
            }
        }
        return true;    
    }    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.')
                {
                    if(!is_safe(i, j, board))
                        return false;
                }
            }
        }
        return true;
    }
    
};
