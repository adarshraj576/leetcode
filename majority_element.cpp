/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int ans=1;
        int threshold = nums.size()/2;
        
        for(int i=0; i<nums.size()-1; i++){
            if(ans > threshold){
                return nums[i];
            }
            else if(nums[i] == nums[i+1]){
                ans += 1;
            }
            else{
                ans = 1;
            }
        }
        
        
        return nums[nums.size()-1];
    }
};