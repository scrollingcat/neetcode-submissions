class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for (int i = 0; i < n; i++)
        {
            unordered_set<char> check1;
            unordered_set<char> check2;
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] != '.')
                {
                    if (check1.find(board[i][j]) != check1.end())
                    {
                        return false;
                    }
                    check1.insert(board[i][j]);;
                }
                if (board[j][i] != '.')
                {
                    if (check2.find(board[j][i]) != check2.end())
                    {
                        return false;
                    }
                    check2.insert(board[j][i]);;
                }
                if (i % 3 == 0 && j % 3 == 0)
                {
                    unordered_set<char> check3;
                    for (int k = i; k < (i + 3); k++)
                    {
                        for (int l = j; l < (j + 3); l++)
                        {
                            if (board[k][l] != '.')
                            {
                                if (check3.find(board[k][l]) != check3.end())
                                {
                                    return false;
                                }
                                check3.insert(board[k][l]);
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
