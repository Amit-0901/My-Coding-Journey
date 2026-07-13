#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mini = prices[0];
      int max_profit = 0;
      int n = prices.size();
      for(int i = 1; i<n ; i++){
        int cost = prices[i] - mini;
        max_profit = max(cost,max_profit);
        mini = min(prices[i], mini);
      }
      return max_profit;
    }
};