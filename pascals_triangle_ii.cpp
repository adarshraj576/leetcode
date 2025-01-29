// Leetcode : https://leetcode.com/problems/pascals-triangle-ii/?envType=problem-list-v2&envId=dynamic-programming

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        ans[0] = 1;
        int level = 0;
        while(level < rowIndex){
            vector<int> temp = ans;
            for(int i = 1; i <= level; i++){
                ans[i] = temp[i-1] + temp[i];
            }
            ans[++level] = 1;
        }
        return ans;
    }
};