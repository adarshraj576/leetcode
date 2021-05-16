/** Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.**/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size(),1);
        
        // vector<int> rev_prod(nums.size());
        
        
        int product1 = 1;
        int product2 = 1;
        
        for(int j=0; j<nums.size(); j++)
        {
           ans[j] *= product1;
           product1 *= nums[j];
            
        }
        
        
        
        for(int i= nums.size()-1; i>=0; i--)
        {
            ans[i] *= product2;
            product2 *= nums[i];
        }
        
        // ans[nums.size()-1] = product2;
         
        return ans;
         
        
        
        
    }
};
