// Last updated: 1/3/2026, 6:25:29 PM
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int maxx = 0;
        for(int i = 1; i < n; i++){
           if(nums[i-1] < nums[i]){
            sum += nums[i];
           }else{
            maxx = max(maxx, sum);
            sum = nums[i];
           }
        }
        return max(maxx, sum);
    }
};