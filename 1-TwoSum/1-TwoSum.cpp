// Last updated: 1/3/2026, 7:14:29 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> res;
       unordered_map<int, int> seen;
       for(int i = 0; i < nums.size(); i++){
        int current = nums[i];
        int needed = target - current;

        if(seen.contains(needed)){
            res.push_back(i);
            res.push_back(seen[needed]);
        }
        seen[current] = i;
       } 
       return res;
    }
};