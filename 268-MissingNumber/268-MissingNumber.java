// Last updated: 1/3/2026, 6:26:15 PM
class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int m = nums.length;
        for(int i = 0; i < m - 1; i++){
            if(nums[i + 1] != nums[i] + 1){
                return nums[i] + 1;
            }
        }
        if(nums[0] != 0){
            return 0;
        }
        return m;
    }
}