class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Initialize 3 sets for rows, columns, and squares
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> squares[9];
        
        // Loop through the board and check for duplicates
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                // Skip empty cells
                if (board[i][j] == '.') {
                    continue;
                }
                    
                // Check for duplicates in row, column, and square
                if (rows[i].count(board[i][j]) || cols[j].count(board[i][j]) || squares[(i/3)*3 + j/3].count(board[i][j])) {
                    return false;
                }
                
                // Add the number to the sets
                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                squares[(i/3)*3 + j/3].insert(board[i][j]);
            }
        }
        
        return true;
    }
};
