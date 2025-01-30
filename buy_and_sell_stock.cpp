// Leetcode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=problem-list-v2&envId=dynamic-programming

// Solution : Using vector of min and max values so far
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        vector<int> maxArr(n);
        vector<int> minArr(n);
        minArr[0] = prices[0];
        maxArr[n - 1] = prices[n - 1];
        for(int i = 1; i < n; i++){
            minArr[i] = min(minArr[i - 1], prices[i]);
            maxArr[n - 1 - i] = max(maxArr[n - i], prices[n - 1 - i]);
        }
        for(int i = 0; i < n; i++){
            ans = max(ans, maxArr[i] - minArr[i]);
        }
        return ans;
    }
};

//Solution : Using min concept without extra space
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = prices[0];
       for(int i = 0; i < prices.size(); i++){
            mini = min(mini, prices[i]);
            prices[i] = prices[i] - mini;
       }
       return *max_element(prices.begin(), prices.end());
    }
};