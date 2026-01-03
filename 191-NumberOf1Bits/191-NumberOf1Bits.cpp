// Last updated: 1/3/2026, 6:26:27 PM
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n != 0){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};