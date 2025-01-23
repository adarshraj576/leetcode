// Leetcode : https://leetcode.com/problems/balanced-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* node){
        if(!node) return 0;
        return 1+max(maxDepth(node->left), maxDepth(node->right));
    }
    bool isBalanced(TreeNode* root) {
       if(maxDepth(root) == 0) return true;
       if(abs(maxDepth(root->left)-maxDepth(root->right)) > 1) return false;
       return isBalanced(root->left) && isBalanced(root->right);
    }
};