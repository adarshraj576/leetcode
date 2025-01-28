// Leetcode : https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            queue<TreeNode*> tempQ;
            vector<int> tempV;
            while(!q.empty()){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) tempQ.push(temp->left);
                if(temp->right) tempQ.push(temp->right);
                tempV.push_back(temp->val);
            }
            q = tempQ;
            ans.push_back(tempV);
        }
        return ans;
    }
};