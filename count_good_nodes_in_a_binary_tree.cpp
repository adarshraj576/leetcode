// Leetcode : https://leetcode.com/problems/count-good-nodes-in-binary-tree/

class Solution {
public:
    int count = 0;
    void dfs(TreeNode* node, int currMax){
        if(!node) return;
        if(node->val >= currMax){
            count++;
            currMax = node->val;
        }
        dfs(node->left, currMax);
        dfs(node->right, currMax);
    }
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return count;
    }
}; 