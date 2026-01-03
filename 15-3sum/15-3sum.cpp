// Last updated: 1/3/2026, 6:27:09 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int sum = 0;
            int j = i + 1;
            int k = n - 1;
             if (i > 0 && nums[i] == nums[i - 1])
                continue;
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j > k && nums[k] == nums[k - 1])
                        k--;
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};