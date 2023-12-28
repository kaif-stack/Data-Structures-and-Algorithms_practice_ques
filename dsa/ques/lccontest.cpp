#include <bits/stdc++.h>
using namespace std; 

    int minCost = INT_MAX;

    int minCostFruits(vector<int>& prices, int i, int currentCost, int free, vector<vector<int>>& dp) {
        if (i == prices.size()) {
            return currentCost;
        }
        if (free != -1 && dp[i][free] != -1) {
            return dp[i][free] + currentCost;
        }

        int costWithCurrent = minCostFruits(prices, i + 1, currentCost + prices[i], i, dp);
        int costWithoutCurrent = (free >= 0) ? minCostFruits(prices, i + 1, currentCost, free - 1, dp) : INT_MAX;

        int result = min(costWithCurrent, costWithoutCurrent);
        if (free != -1) {
            dp[i][free] = min(dp[i][free], result - currentCost);
        }

        return result;
    }

    int minimumCoins(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        minCost = minCostFruits(prices, 0, 0, -1, dp);
        return minCost;
    }

int minimumCoins(vector<int>& prices) {
        return rec(prices, 0);
    }

    int main()
    {
        vector<int> p = {3,1,2};
        cout<<minimumCoins(p);
    }