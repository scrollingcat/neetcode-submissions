class NumMatrix {
private:
    vector<vector<int>> preMatrix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            int m = matrix[0].size();
            vector<int> temp (m);
            for (int j = 0; j < m; j++)
            {
                temp[j] += matrix[i][j];
                if (i > 0 && j > 0)
                {
                    temp[j] += preMatrix[i - 1][j];
                    temp[j] += temp[j - 1];
                    temp[j] -= preMatrix[i - 1][j - 1];
                }
                else if (i > 0)
                {
                    temp[j] += preMatrix[i - 1][j];
                }
                else if (j > 0)
                {
                    temp[j] += temp[j - 1];
                }
            }
            preMatrix.push_back(temp);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int curr_val = preMatrix[row2][col2];
        if (row1 > 0)
        {
            curr_val -= preMatrix[row1 - 1][col2];
        }
        if (col1 > 0)
        {
            curr_val -= preMatrix[row2][col1 - 1];
        }
        if (row1 > 0 && col1 > 0)
        {
            curr_val += preMatrix[row1 - 1][col1 - 1];
        }
        return curr_val;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */