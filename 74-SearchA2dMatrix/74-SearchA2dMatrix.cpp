// Last updated: 1/3/2026, 6:26:45 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = rows*cols-1;
        int mid = start+(end-start)/2;
        while(start <= end){
            int element = matrix[mid/cols][mid%cols];
            if(element == target){
                return true;
            }else if(element < target){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return false;
    }
};