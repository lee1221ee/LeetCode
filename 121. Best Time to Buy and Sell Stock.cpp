// Time - O(n)
// 在 Array 中持續比較更新最小值的價格
// 根據當前價格減去最小價格的到today_profit
// today_profit 是否超過之前的最大 profit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        int today_profit = 0;
        for(int i = 0;i < prices.size();i++)
        {
            if(prices[i] < min_price)
                min_price = prices[i];
            today_profit = prices[i] - min_price;
            if(today_profit > max_profit)
                max_profit = today_profit;
        }
        return max_profit;
    }
};
