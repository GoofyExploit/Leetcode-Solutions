// Last updated: 1/3/2026, 6:26:04 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};