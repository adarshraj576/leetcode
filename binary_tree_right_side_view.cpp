// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void helper(TreeNode* root, vector<int> &ans, int &level, int height){
        if(!root){
            return;
        }
        
        if(level < height){
            ans.push_back(root->val);
            level=height;
        }
        
        helper(root->right, ans, level, height+1);
        helper(root->left, ans, level, height+1);
        
        
    }
    
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int level = 0;
        
        helper(root, ans, level, 1);
        
        return ans;
    }
};