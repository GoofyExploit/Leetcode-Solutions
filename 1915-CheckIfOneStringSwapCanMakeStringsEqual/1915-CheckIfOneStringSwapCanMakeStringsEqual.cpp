// Last updated: 1/3/2026, 6:25:32 PM
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        
        if (s1 == s2) {
            return true;
        }

        vector<int> diffIndices;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                diffIndices.push_back(i);
            }
        }

        if (diffIndices.size() != 2) {
            return false;
        }

        int i = diffIndices[0], j = diffIndices[1];
        return (s1[i] == s2[j] && s1[j] == s2[i]);
    }
};
