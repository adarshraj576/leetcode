// Leetcode link: https://leetcode.com/problems/contains-duplicate-ii/description/?envType=study-plan-v2&envId=top-interview-150

// Solution : Using set and sliding window
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_set<int> s;
    for (int i = 0; i < nums.size(); ++i) {
        if (s.find(nums[i]) != s.end()) {
            return true;
        }
        s.insert(nums[i]);
        if (s.size() > k) {
            s.erase(nums[i - k]);
        }
    }
    return false;
    }
};