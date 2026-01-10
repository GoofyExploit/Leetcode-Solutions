class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;
        int maxLength = 0, i = 0, j = 0;
        unordered_set<char> seen;
        while(j < n){
            if(seen.find(s[j]) == seen.end()){
                seen.insert(s[j]);
                maxLength = max(maxLength, j-i+1);
                j++;
            }else{
                seen.erase(s[i]);
                i++;
            }
        }
        return maxLength;
    }
};