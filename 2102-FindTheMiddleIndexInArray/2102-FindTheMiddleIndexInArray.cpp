// Last updated: 1/3/2026, 6:25:26 PM
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0, leftSum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            if(leftSum == totalSum - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};