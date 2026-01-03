// Last updated: 1/3/2026, 6:25:59 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        while(i < chars.size()){
            int j = i+1;
            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }
            chars[ansIndex++] = chars[i];
            int count = j-i;
            if(count > 1){
                string cnt= to_string(count);
                for(char ch : cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};