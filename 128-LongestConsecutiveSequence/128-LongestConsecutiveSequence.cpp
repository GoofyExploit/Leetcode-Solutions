// Last updated: 1/3/2026, 6:26:30 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int longest = 1;
        int cnt = 0;
        if(n == 0) return 0;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }
        for(auto it: st){
            if(st.find(it - 1) == st.end()){
                cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x += 1;
                    cnt++;
                }
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};