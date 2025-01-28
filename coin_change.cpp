// Leetcode : https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> ans(amount+1, amount+1);
        ans[0] = 0;
        for(int i = 1; i < amount + 1; i++){
            for(int j = 0; j < coins.size(); j++){
                if(coins[j] <= i){
                    ans[i] = min(ans[i], 1 + ans[i - coins[j]]);
                }
            }
        }
        return ans[amount] == amount + 1 ? -1  : ans[amount];
    }
};