// Tags : Dynamic Programming
// Say you have an array for which the ith element is the price of a given stock on day i.

// Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times) with the following restrictions:

// You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
// After you sell your stock, you cannot buy stock on next day. (ie, cooldown 1 day)
// Example:

// Input: [1,2,3,0,2]
// Output: 3 
// Explanation: transactions = [buy, sell, cooldown, buy, sell]

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.empty()){
            return 0;
    }
    int n = prices.size();
    vector<int> dp(n,0);
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(j<2)
                dp[i] = max(max(dp[i],max(prices[i]-prices[j],0)),dp[i-1]);
            else
                dp[i] = max(max(dp[i],max(prices[i]-prices[j] + dp[j-2],0)),dp[i-1]) ;  
                
        }
    }
    int ans =dp[n-1];
    return ans;
    }
};