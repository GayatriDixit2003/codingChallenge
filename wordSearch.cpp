class Solution {
public:
 bool dfs(vector<vector<char>>& board, const string& word, int row, int col, int index) {
        if (index == word.size()) {
            return true;  // All the characters are checked
        }
        
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] != word[index]) {
            return false;  // Out of bounds or characters don't match
        }
        
        char temp = board[row][col];
        board[row][col] = '#';  // Mark the cell as visited

        bool found = dfs(board, word, row + 1, col, index + 1) ||
                     dfs(board, word, row - 1, col, index + 1) ||
                     dfs(board, word, row, col + 1, index + 1) ||
                     dfs(board, word, row, col - 1, index + 1);

        board[row][col] = temp;  // Restore the cell
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
       
        int rows = board.size();
        if (rows == 0) return false;
        int cols = board[0].size();

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                if (dfs(board, word, row, col, 0)) {
                    return true;
                }
            }
        }
        return false;
    
    }
};
