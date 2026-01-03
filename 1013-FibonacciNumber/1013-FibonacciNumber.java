// Last updated: 1/3/2026, 6:25:50 PM
class Solution {
    public int fib(int n) {
     if(n <= 1){
        return n;
     }
     int last = fib(n-1);
     int secLast = fib(n-2);
     return last + secLast;
    }
}