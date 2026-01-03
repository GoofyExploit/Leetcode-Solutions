// Last updated: 1/3/2026, 6:26:41 PM
class Solution {
    public boolean isPalindrome(String s) {
        String newStr = s.toLowerCase();
        
        String result = newStr.replaceAll("[^a-zA-Z0-9]", "");
        
        int n = result.length();
        int i = 0;
        int j = n - 1;
        
        while (i < j) {
            if (result.charAt(i) != result.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
}
