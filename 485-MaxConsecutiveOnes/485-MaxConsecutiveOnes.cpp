// Last updated: 1/3/2026, 6:25:57 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx = 0;
        int cnt = 0;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            if(nums[i] == 1){
                cnt++;
                maxx = max(cnt, maxx);
            }else{
                cnt = 0;
            }
        }
        return maxx;
    }
};