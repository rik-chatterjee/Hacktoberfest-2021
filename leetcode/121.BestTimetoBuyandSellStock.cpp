// Problelm : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Solution is using Kaden's Algorithm

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++){
            minprice = min(minprice,prices[i]);
            maxprofit = max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
        
    }
};
