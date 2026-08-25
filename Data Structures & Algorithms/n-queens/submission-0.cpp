class Solution {
public:
    void print_board(vector<vector<int>>& board, vector<vector<string>>&res)
    {

        vector<string> valid;
        for (int i = 0; i < board.size(); i++)
        {
            string row = "";
            for (int j = 0; j < board.size(); j++)
            {
                if (board[i][j]) row += "Q";
                else row += ".";
            }
            valid.push_back(row);
        }
        res.push_back(valid);
    }
    bool check(vector<vector<int>>& board, int row, int column)
    {
        for (int i = 0, j = column; i < row; i++)
        {

            if (board[i][j])
            {
                // cout << "Row: " << row << "\t Column: " << column << endl;
                // cout << "Queen found at : " << i << '\t' << j << endl;
                return false;
            }
        }
        for (int i = row - 1, j = column - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j])
            {
                // cout << "Row: " << row << "\t Column: " << column << endl;
                // cout << "Queen found at : " << i << '\t' << j << endl;
                return false;
            }
        }
        for (int i = row - 1, j = column + 1; i >= 0 && j < board.size(); i--, j++)
        {
            if (board[i][j])
            {
                // cout << "Row: " << row << "\t Column: " << column << endl;
                // cout << "Queen found at : " << i << '\t' << j << endl;
                return false;
            }
        }
        return true;
    }
    void nQueens(int n, vector<vector<int>>& board, int i, vector<vector<string>>&res)
    {
        if (i == n){
            print_board(board, res);
            return;
        }
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 1;
            if (!check(board, i, j))
            {
                board[i][j] = 0;
                continue;
            }
            nQueens(n, board, i + 1, res);
            board[i][j] = 0;
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board (n, vector<int> (n,0));
        vector<vector<string>>res;
        nQueens(n, board, 0, res);
        return res;
    }
};
