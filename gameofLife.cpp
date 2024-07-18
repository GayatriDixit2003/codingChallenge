class Solution {
public:
int findNeighbours(const vector<vector<int>>& board, int row, int col) {
    int cnt = 0;
    int n = board.size();
    int m = board[0].size();
    int delrow[] = {0, -1, -1, -1, 0, 1, 1, 1};
    int delcol[] = {-1, -1, 0, 1, 1, 1, 0, -1};
    for (int i = 0; i < 8; i++) {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && abs(board[nrow][ncol]) == 1) {
            cnt++;
        }
    }
    return cnt;
}
    void gameOfLife(vector<vector<int>>& board) {
        
        int n = board.size();
    int m = board[0].size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int liveNeighbours = findNeighbours(board, i, j);
            
            // Rule 1 or Rule 3
            if (board[i][j] == 1 && (liveNeighbours < 2 || liveNeighbours > 3)) {
                board[i][j] = -1; // -1 signifies the cell is now dead but originally was alive
            }
            // Rule 4
            if (board[i][j] == 0 && liveNeighbours == 3) {
                board[i][j] = 2; // 2 signifies the cell is now alive but originally was dead
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] > 0) {
                board[i][j] = 1;
            } else {
                board[i][j] = 0;
            }
        }
    }

        
    }
};
