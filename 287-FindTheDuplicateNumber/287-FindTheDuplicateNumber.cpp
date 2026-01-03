// Last updated: 1/3/2026, 6:26:05 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int duplicate = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]){
                duplicate = nums[i];
            }
        }
        return duplicate;
    }
};