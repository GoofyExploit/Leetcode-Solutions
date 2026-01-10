class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0) return 0;
        int left = 0, right = 1;
        int minPrice = prices[left];
        int maxProfit = 0;
        while(right < n){
            if(prices[left] < prices[right]){
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            }else{
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};