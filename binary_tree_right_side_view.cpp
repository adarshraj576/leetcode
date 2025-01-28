// Leetcode : https://leetcode.com/problems/binary-tree-right-side-view/

class Solution {
public:
    
    void helper(TreeNode* node, int h, vector<int>& ans){
        if(!node) return;
        if(ans.size() < h){
            ans.push_back(node->val);
        }
        helper(node->right, h+1, ans);
        helper(node->left, h+1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        ans.push_back(root->val);
        int height = 1;
        helper(root, height, ans);
        return ans;
    }
};