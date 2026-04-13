class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minprice=INT_MAX;
      int maxprofit =0;
      for(auto price :prices )
      {
        minprice =min(price,minprice);
        int profit = price -minprice;
        maxprofit = max(profit,maxprofit);
      }
      return maxprofit;

    }
};
