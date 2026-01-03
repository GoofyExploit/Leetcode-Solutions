// Last updated: 1/4/2026, 2:17:43 AM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                int boxIndex = (i/3) * 3 + (j/3);
                int num = board[i][j] - '1';
                if(rows[i][num] || cols[j][num] || boxes[boxIndex][num]){
                    return false;
                }
                rows[i][num] = {true};
                cols[j][num] = {true};
                boxes[boxIndex][num] = {true};
            }
        }
        return true;
    }
};