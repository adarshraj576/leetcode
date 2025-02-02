// Leetcode : https://leetcode.com/problems/find-the-duplicate-number/

// Solution : Floyd's Algorithm - Linked List Cycle concept
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0];
        int slow = nums[0];
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast) break;
        }
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};