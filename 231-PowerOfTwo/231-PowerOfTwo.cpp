// Last updated: 1/3/2026, 6:26:19 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int count=0;
        int m = n;
        long power = 0;
        while(m!=0){
            m = m/2;
            count++;
        }
        for(int i = 0; i < count; i++){
            power = pow(2, i);
            if(power == n) return true;
        }
        return false;
    }
};