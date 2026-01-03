// Last updated: 1/3/2026, 6:27:03 PM
class Solution {
    public int strStr(String haystack, String needle) {
        int haylen = haystack.length();
        int neelen = needle.length();
        for(int i = 0; i <= haylen - neelen; i++){
            if(haystack.substring(i, i + neelen).equals(needle)) return i;
        }
        return -1;
    }
}