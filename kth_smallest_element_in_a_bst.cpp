// Leetcode : https://leetcode.com/problems/kth-smallest-element-in-a-bst/

class Solution {
public:
    void helper(TreeNode* node, vector<int>& v){
        if(!node) return;
        helper(node->left, v);
        v.push_back(node->val);
        helper(node->right, v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        helper(root, arr);
        return arr[k-1];    
    }
};