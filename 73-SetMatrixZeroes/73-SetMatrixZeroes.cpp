// Last updated: 1/3/2026, 6:26:46 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col0 = 1;  // This will be used to track if the first column should be zeroed.
        
        // First pass to mark the rows and columns that need to be zeroed.
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;  // Mark the row
                    if(j != 0){
                        matrix[0][j] = 0;  // Mark the column
                    }else{
                        col0 = 0;  // Mark the first column if it has a zero
                    }
                }
            }
        }
        
        // Second pass to update the matrix based on the markings.
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        // Handle the first row
        if(matrix[0][0] == 0){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }
        
        // Handle the first column
        if(col0 == 0){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
