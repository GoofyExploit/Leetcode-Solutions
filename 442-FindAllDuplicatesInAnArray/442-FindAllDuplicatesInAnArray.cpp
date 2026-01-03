// Last updated: 1/3/2026, 6:26:00 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(i < nums.size() - 1 && nums[i] == nums[i+1]){
                result.push_back(nums[i]);
            }
            while(i < nums.size()-1 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return result;
    }
};