// Last updated: 1/3/2026, 6:26:54 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        for(auto& i : strs){
            string sorted = i;
            sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(i);
        }
        for(auto& pair : mp){
            res.push_back(pair.second);
        }
        return res;
    }
};