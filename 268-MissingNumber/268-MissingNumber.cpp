// Last updated: 1/3/2026, 6:26:08 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int arrSum = 0;
        int totalSum = 0;
        for(int i = 0; i < n; i++){
            arrSum = arrSum + nums[i];
        }
        for(int i = 1; i <= n; i++){
            totalSum = totalSum + i;
        }
        return totalSum - arrSum;
    }
};