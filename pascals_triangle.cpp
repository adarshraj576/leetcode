// Leetcode : https://leetcode.com/problems/pascals-triangle/?envType=problem-list-v2&envId=dynamic-programming

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0].push_back(1);
        for(int i = 1; i < numRows; i++){
            ans[i].push_back(1);
            for(int j = 0; j < ans[i-1].size() - 1; j++){
                ans[i].push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            ans[i].push_back(1);
        }
        return ans;
    }
};