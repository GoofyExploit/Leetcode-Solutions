// Last updated: 1/3/2026, 6:27:01 PM
int getPivot(vector<int>& nums) {
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    if(nums[s] <= nums[e]) return 0;
    while (s < e) {
        if (nums[mid] >= nums[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(vector<int>& nums, int s, int e, int target) {
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        if (nums[pivot] <= target && target <= nums[e]) {
            return binarySearch(nums, pivot, e, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};