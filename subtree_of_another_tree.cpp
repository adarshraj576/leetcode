// Leetcode :  https://leetcode.com/problems/subtree-of-another-tree/

class Solution {
public:
    bool isSameTree(TreeNode* a, TreeNode* b){
        if(!a && !b) return true;
        if(!a || !b) return false;
        if(a->val != b->val) return false;
        return isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        if(isSameTree(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};