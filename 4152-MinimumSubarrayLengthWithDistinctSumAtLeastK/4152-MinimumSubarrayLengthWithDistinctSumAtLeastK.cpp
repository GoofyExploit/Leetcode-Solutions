// Last updated: 1/4/2026, 2:16:53 AM
class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        long long distinctSum = 0;    
        int left = 0, minLen = INT_MAX;
        
        for(int right = 0; right < n; right++) {
            if(freq[nums[right]] == 0) {
                distinctSum += nums[right];
            }
            freq[nums[right]]++;
            while(distinctSum >= k && left <= right) {
                minLen = min(minLen, right - left + 1);
                freq[nums[left]]--;
                if(freq[nums[left]] == 0) {
                    distinctSum -= nums[left];
                }
                left++;
            }
        }
        
        return minLen == INT_MAX ? -1 : minLen;
    }
};