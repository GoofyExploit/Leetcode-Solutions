// Last updated: 1/3/2026, 7:14:24 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string res;
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0], last = strs[n-1];
        int mini = min(first.size(), last.size());
        for(int i = 0; i < mini; i++){
            if(first[i] == last[i]){
                res += first[i];
            }else{
                break;
            }
        }
        return res;
    }
};