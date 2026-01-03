// Last updated: 1/3/2026, 6:26:56 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;

        int startRow = 0;
        int endRow = row-1;
        int startCol = 0;
        int endCol = col-1;

        // transpose
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i < j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        // reverse of each row
        for(int i = 0; i < row; i++){
            int left = 0;
            int right = col-1;
            while(left < right){
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }


    }
};