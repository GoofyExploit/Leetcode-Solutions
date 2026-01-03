// Last updated: 1/4/2026, 2:16:51 AM
class Solution {
public:
    string reversePrefix(string s, int k) {
        string sub = s.substr(0, k);
        reverse(sub.begin(), sub.end());
        s.replace(0, k, sub);
        return s;
    }
};