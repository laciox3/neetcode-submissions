class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int squares[9] = {0};
        
        for (int i = 0; i < 9; i++) {

            int row = 0;
            int col = 0;

            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int mask = 1 << (board[i][j] - '1');
                    if (row & mask) return false;
                    row |= mask;

                    int idx = (i / 3) * 3 + (j / 3);
                    if (squares[idx] & mask) return false;
                    squares[idx] |= mask;
                }

                if (board[j][i] != '.') {
                    int mask = 1 << (board[j][i] - '1');
                    if (col & mask) return false;
                    col |= mask;
                }

            }
        }
        return true;
    }
};
