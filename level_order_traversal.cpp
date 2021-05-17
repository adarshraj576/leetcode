// Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).


// Iterative solution using Queues
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        
        
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            queue<TreeNode*> q1;
            vector<int> v;
            while(!q.empty()){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) q1.push(temp->left);
                if(temp->right) q1.push(temp->right);

                v.push_back(temp->val);
            }
            
            q=q1;
            ans.push_back(v);


        }
        return ans;
        
    }
};

// Recursive Solution : Similar to Pre-order Traversal
class Solution {
public:
    void helper(TreeNode* root, vector<vector<int>> &ans, int h){
        if(!root){
            return;
        }
        
        if(h < ans.size()){
            ans[h].push_back(root->val);
        }
        
        else{
            vector<int> v;
            v.push_back(root->val);
            ans.push_back(v);
        }
        
        
        
        helper(root->left, ans, h+1);
        helper(root->right, ans, h+1);

        
        
        
    }