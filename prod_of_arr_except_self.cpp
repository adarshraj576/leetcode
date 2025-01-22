// Leetcode : https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int prefix_prod = 1;
        int suffix_prod = 1;
        for(int i = 0; i < nums.size(); i++){
            ans[i] *= prefix_prod;
            prefix_prod *= nums[i];
        }
        for(int j = nums.size()-1; j>=0; j--){
            ans[j] *= suffix_prod;
            suffix_prod *= nums[j];
        }
        return ans;
    }
};