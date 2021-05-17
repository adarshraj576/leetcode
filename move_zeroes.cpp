/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/


// Naive Solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                int j=i+1;
                while(j<nums.size()){
                    if(nums[j]!=0){
                        swap(nums[i], nums[j]);
                        break;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
    }
};

// Better Approach in terms of Time complexity

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curr_pos = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                 nums[curr_pos++] = nums[i];
            }
        }
           
        
        for(int j=curr_pos; j<nums.size(); j++){
            nums[j] = 0;
        }
        
        
    }
};