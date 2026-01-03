// Last updated: 1/3/2026, 6:26:11 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        for(char c : s) freq[c]++;
        for(char c : t) freq[c]--;
        if(s.size() != t.size()) return false;
        for(auto& i : freq){
            if(i.second != 0) return false;
        }
        return true;
    }
};