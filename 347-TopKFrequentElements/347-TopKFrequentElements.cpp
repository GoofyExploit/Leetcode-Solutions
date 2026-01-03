// Last updated: 1/3/2026, 6:26:02 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> mp;
        for(auto& i : nums){
            mp[i]++;
        }
        while(k --> 0){
            int maxFreq = -1;
            int maxNum = 0;
            for(auto& pair : mp){
                if(pair.second > maxFreq){
                    maxFreq = pair.second;
                    maxNum = pair.first;
                }
            }
            res.push_back(maxNum);
            mp.erase(maxNum);
        }
        return res;
    }
};