class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0, maxFreq = 0, maxLen = 0;
        for(int right = 0; right < s.size(); right++){
            char curr = s[right];
            freq[curr - 'A']++;
            maxFreq = max(maxFreq, freq[curr - 'A']);

            int windowLen = right - left + 1;
            if(windowLen - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};