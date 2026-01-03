// Last updated: 1/3/2026, 6:27:08 PM
class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0, n = nums.length;
        for(int i = 0; i < n; i++){
            if(i == 0 || nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
}