// Leetcode : https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       for(int i = 0; i < 9; i++){
            std::unordered_set<char> row, col;
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(row.count(board[i][j])) return false;
                    row.insert(board[i][j]);
                }
                if(board[j][i] != '.'){
                    if(col.count(board[j][i])) return false;
                    col.insert(board[j][i]);
                }
            }
       }
       for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                std::unordered_set<char> subgrid;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char value = board[row + i][col + j];
                        if (value != '.'){
                            if(subgrid.count(value)) return false;
                            subgrid.insert(value);
                        }
                            
                    }
                }
            }
        }
       return true;
    }
};