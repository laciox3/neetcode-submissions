class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();

        std::unordered_set<char> rows;
        std::unordered_set<char> cols;
        std::vector<std::unordered_set<char>> squares(n);

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] != '.') {
                    if (!rows.insert(board[i][j]).second) return false;

                    int idx = (i / 3) * 3 + (j / 3);
                    if (!squares[idx].insert(board[i][j]).second) return false;
                }

                if (board[j][i] != '.') {
                    if (!cols.insert(board[j][i]).second) return false;
                }

            }
            rows.clear();
            cols.clear();
        }
        return true;
    }
};
