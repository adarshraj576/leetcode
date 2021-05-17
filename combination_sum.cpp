/*Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/

class Solution {
public:
    
    void combination_helper(vector<int>& candidates, int target,  vector<vector<int>> &ans, vector<int> &temp, int start){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=start; i<candidates.size(); i++){
            if(candidates[i]>target){
                return;
            }
            temp.push_back(candidates[i]);
            combination_helper(candidates, target-candidates[i], ans, temp, i);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        combination_helper(candidates, target, ans, temp, 0);
        
        return ans;
        
        
    }
};
