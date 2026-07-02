class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                char num = board[i][j];

                // Check row
                for (int col = 0; col < 9; col++) {
                    if (col != j && board[i][col] == num)
                        return false;
                }

                // Check column
                for (int row = 0; row < 9; row++) {
                    if (row != i && board[row][j] == num)
                        return false;
                }

                // Check 3x3 box
                int r = (i / 3) * 3;
                int c = (j / 3) * 3;

                for (int row = r; row < r + 3; row++) {
                    for (int col = c; col < c + 3; col++) {

                        // Skip current cell
                        if (row == i && col == j)
                            continue;

                        if (board[row][col] == num)
                            return false;
                    }
                }
            }
        }

        return true;
    }
};