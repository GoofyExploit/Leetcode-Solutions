// Last updated: 1/3/2026, 6:25:21 PM
class Solution {
public:
    vector<string> partitionString(string s) {
        set<string> seen;
        vector<string> ans;
        int n = s.length();
        int i = 0;
        while(i < n){
            string segment = "";
            bool found = false;
            for(int j = i; j < s.length(); j++){
                segment += s[j];
                if(seen.find(segment) == seen.end()){
                    seen.insert(segment);
                    ans.push_back(segment);
                    i=j+1;
                    found = true;
                    break;
                }
            }
            if(!found){
                break;
            }
        }
        return ans;
    }
};