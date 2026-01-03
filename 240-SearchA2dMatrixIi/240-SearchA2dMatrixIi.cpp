// Last updated: 1/3/2026, 6:26:13 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int rowIndex = 0;
        int colIndex = cols-1;

        while(rowIndex < rows && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];
            if(element == target) return 1;
            else if(element < target) rowIndex++;
            else colIndex--;
        } 
        return 0;
    }
};