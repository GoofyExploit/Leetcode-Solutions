// Last updated: 1/3/2026, 6:26:34 PM
class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        for(int i = 0; i < nums.length - 1; i++){
            if(nums[i] != nums[i + 1]){
                return nums[i];
            }else{
                i++;
            }
        }
    return nums[nums.length - 1];
    }
}