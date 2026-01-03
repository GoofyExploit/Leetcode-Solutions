class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& pair : mp){
            if(pair.second > 1){
                return true;
                break;
            }
        }
        return false;
    }
};