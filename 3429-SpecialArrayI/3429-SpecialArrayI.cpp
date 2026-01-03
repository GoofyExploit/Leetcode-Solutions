// Last updated: 1/3/2026, 6:25:24 PM
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        if(n == 1) return true;
        for(int i = 0; i < n-1; i++){
            if(nums[i] % 2 == nums[i+1] % 2){
                return false;
            }
        }
        return true;
    }
};