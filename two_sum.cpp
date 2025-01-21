// Leetcode : https://leetcode.com/problems/two-sum/

//Solution 1 : Nested loop can be used, but it will take O(n^2) time complexity

//Solution 2 : Using Hashing, O(n) time complexity
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                ans.push_back(mp[nums[i]]);
                ans.push_back(i);
            }
            else{
                mp[target-nums[i]] = i;
            }
        }
        return ans;
    }
};