class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int TodaysPrice = 0;
        int minbuy = INT_MAX;
        int maxsell = INT_MIN;
        for (int i = 0; i < prices.size(); i++) {
            TodaysPrice = prices[i];
            minbuy = min(TodaysPrice , minbuy);
            if (minbuy < TodaysPrice) {
                maxsell = max(TodaysPrice - minbuy, maxsell);
            }
        }
        if(maxsell == INT_MIN)return 0;
        return maxsell ; 
    }
};