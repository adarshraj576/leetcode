// Leetcode : https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
    bool isValidBSThelper(TreeNode* node, long long min, long long max){
        if(!node) return true;
        if(node->val > min && node->val < max){
            return isValidBSThelper(node->left, min, node->val) && isValidBSThelper(node->right, node->val, max);
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        long long min = -2147483650;
        long long max = 2147483650;
        return isValidBSThelper(root, min, max);
    }
};