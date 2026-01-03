// Last updated: 1/3/2026, 6:26:28 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        int n = nums.size();
        for(auto& i : nums){
            mp[i]++;
        }
        for(auto& pair : mp){
            if(pair.second > (n/2)){
                res = pair.first;
            }
        }
        return res;
    }
};