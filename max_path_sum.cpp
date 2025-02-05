// Leetcode : https://leetcode.com/problems/binary-tree-maximum-path-sum/

// Solution
class Solution {
public:
    int sum = INT_MIN;
    int calculateSum(TreeNode* node){
        if(!node) return 0;
        int left = calculateSum(node->left);
        int right = calculateSum(node->right);
        sum = max(sum, node->val + left + right);
        return max(0, node->val + max(left, right)); // To make sure we are going to benefit from one of the node sides

    }
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        calculateSum(root);
        return sum;
    }
};