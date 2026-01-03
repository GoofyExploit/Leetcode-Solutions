// Last updated: 1/3/2026, 6:26:37 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minn = prices[0];
        int profit = 0;
        for(int i = 1; i < n; i++){
            int cost = prices[i] - minn;
            profit = max(cost, profit);
            minn = min(minn, prices[i]);
        }
        return profit;
    }
};