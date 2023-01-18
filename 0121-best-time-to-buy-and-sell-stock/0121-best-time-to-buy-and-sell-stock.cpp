class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0,sell=0;
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[sell] - prices[buy]<0)
            {
                buy = sell;
                sell++;
            }
            else if(prices[sell] - prices[buy]>maxprofit)
            {
                maxprofit = prices[sell] - prices[buy];
                sell++;
            }
            else                
                sell++;
                
        }
        return maxprofit;
    }
};