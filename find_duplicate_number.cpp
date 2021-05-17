/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.*/



// Solution with modification in the array
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int i=0;
        int res;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
               return nums[i];
            }
            i++;
        }
        return -1;
    }
};

// Solution without modification : using map in the extra space



