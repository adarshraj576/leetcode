// Leetcode : https://leetcode.com/problems/min-cost-climbing-stairs/

// Solution : DP using vector space
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            if(i < 2) ans[i] = cost[i];
            else ans[i] = cost[i] + min(ans[i-1], ans[i-2]);
        }
        return min(ans[n-1], ans[n-2]);
    }
};

// Solution : DP without using vector space
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int first = cost[0];
        int second = cost[1];
        for(int i = 2; i < n; i++){
           int current = cost[i] + min(first, second);
            first = second;
            second = current;
        }
        return min(first, second);
    }
};