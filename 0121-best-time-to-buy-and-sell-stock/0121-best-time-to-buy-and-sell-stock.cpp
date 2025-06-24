class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int min_pro = prices[0];
        int max_profit = 0;
        for (int i = 0 ; i < n ; i ++){
            int profit = prices[i] - min_pro;
             max_profit   = max(max_profit , profit);
             min_pro = min(min_pro , prices[i]);
        }
        return max_profit;
    }
};