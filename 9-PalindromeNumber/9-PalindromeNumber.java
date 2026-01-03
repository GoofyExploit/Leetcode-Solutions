// Last updated: 1/3/2026, 6:27:11 PM
class Solution {
    public boolean isPalindrome(int x) {
        int rev = 0;
        int original = x;
        while(x != 0){
            int ld = x % 10;
            rev = rev * 10 + ld;
            x /= 10;
        }
        if(original != rev || original < 0){
            return false;
        }
        return true;
    }
}