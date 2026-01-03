// Last updated: 1/3/2026, 6:26:32 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int num = 0;
        for(int i = 0; i < n; i++){
            cnt = 0;
            for(int j = 0; j < n; j++){
                if(nums[j] == nums[i]){
                    cnt++;
                }
            }
            if(cnt == 1){
                return nums[i];
            }
        }
        return -1;
    }
};