// Last updated: 1/3/2026, 6:25:22 PM
class Solution {
private:
    int getLCP(const string& a, const string& b) {
        int len = min(a.size(), b.size());
        for (int i = 0; i < len; i++) {
            if (a[i] != b[i]) return i;
        }
        return len;
    }

public:
    vector<int> longestCommonPrefix(vector<string>& words) {
        int n = words.size();
        if (n <= 2) return vector<int>(n, 0);

        vector<int> lcp(n - 1);
        for (int i = 0; i < n - 1; i++) {
            lcp[i] = getLCP(words[i], words[i + 1]);
        }

        vector<int> prefixMax(n - 1), suffixMax(n - 1);
        prefixMax[0] = lcp[0];
        for (int i = 1; i < n - 1; i++) {
            prefixMax[i] = max(prefixMax[i - 1], lcp[i]);
        }

        suffixMax[n - 2] = lcp[n - 2];
        for (int i = n - 3; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], lcp[i]);
        }

        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[i] = suffixMax[1];
            } else if (i == n - 1) {
                result[i] = prefixMax[n - 3];
            } else {
                int between = getLCP(words[i - 1], words[i + 1]);
                int leftMax = (i - 2 >= 0) ? prefixMax[i - 2] : 0;
                int rightMax = (i + 1 < n - 1) ? suffixMax[i + 1] : 0;
                result[i] = max({leftMax, rightMax, between});
            }
        }

        return result;
    }
};
