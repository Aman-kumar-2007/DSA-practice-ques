1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4      int n = prices.size();
5      int maxProfit = 0;
6      int buyPrize = prices[0];
7
8      for(int i=1; i< n; i++){
9        if(buyPrize < prices[i]){
10        maxProfit = max(maxProfit,prices[i]-buyPrize);
11        }
12        buyPrize = min(buyPrize,prices[i]);
13      }
14      return maxProfit;
15    }
16};