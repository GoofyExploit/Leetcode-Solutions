// Last updated: 1/3/2026, 7:14:30 PM
class Solution {
    public int reverse(int x) {
        int rev = 0;
        while(x != 0){
            int ld = x % 10;
            if(rev > (Integer.MAX_VALUE/10) || rev < (Integer.MIN_VALUE/10)){
            return 0;
            }
            rev = rev * 10 + ld;
            x /= 10;
        }
        
        return (x < 0) ? (-1 * rev) : rev;
    }
}