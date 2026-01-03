// Last updated: 1/3/2026, 6:25:56 PM
class Solution {
private:
    bool isEqual(int a[], int b[]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        int s1Freq[26] = {0};
        int windowFreq[26] = {0};
        for(int i = 0; i < s1.length(); i++){
            int index = s1[i] - 'a';
            s1Freq[index]++;
        }
        int i = 0;
        while(i < s1.length()){
            int index = s2[i] - 'a';
            windowFreq[index]++;
            i++;
        }
        if(isEqual(s1Freq, windowFreq)) return true;
        while(i < s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            windowFreq[index]++;

            char oldChar = s2[i - s1.length()];
            index = oldChar - 'a';
            windowFreq[index]--;
            i++;

            if(isEqual(s1Freq, windowFreq)){
                return true;
            }
        }
        return false;
    }
};