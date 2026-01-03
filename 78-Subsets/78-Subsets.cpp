// Last updated: 1/3/2026, 6:26:40 PM
class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index){
        int total = 1 << nums.size();
        for(int mask = 0; mask < total; mask++){
            vector<int> output;
            for(int i = 0; i < nums.size(); i++){
                if((mask >> i) & 1){
                    output.push_back(nums[i]);
                }
            }
            ans.push_back(output);
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};