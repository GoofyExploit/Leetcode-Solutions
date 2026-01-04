// Last updated: 1/4/2026, 11:09:08 PM
class Solution {
public:
    string largestEven(string s) {
        while(!s.empty() && s.back() == '1'){
            s.pop_back();
        }
        if(!s.empty() && s.back() == '2'){
            return s;
        }
        return "";
    }
};