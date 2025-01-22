// Leetcode : https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(maxDepth(root->left), maxDepth(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right==NULL)) return 0;
        int depth = maxDepth(root->left) + maxDepth(root->right);
        return max(depth, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }
};