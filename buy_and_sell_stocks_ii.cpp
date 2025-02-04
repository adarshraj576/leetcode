// Leetcode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

// Solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int start = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > start) max += prices[i] - start;
            start = prices[i];
        }
        return max;
    }
};