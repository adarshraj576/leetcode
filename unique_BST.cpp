// Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1, 0);
        dp[0]=1; dp[1]=1;
        for(int i=2; i<n+1; i++){
            for(int j=0; j<i; j++){
                dp[i] +=  dp[j]*dp[i-1-j];
            }
            
        }
        
        return dp[n];
    }
};