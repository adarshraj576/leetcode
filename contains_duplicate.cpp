// Leetcode link: https://leetcode.com/problems/contains-duplicate/

// Solution 1: Using sorting and checking if the adjacent elements are equal
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       for (int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
       }
       return false;
    }
};

// Solution 2: Using set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> hashSet;
        for(int i=0; i < nums.size(); i++){
            hashSet.insert(nums[i]);
        }
        return hashSet.size() != nums.size();
    }
};