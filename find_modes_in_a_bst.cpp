// Leetcode : https://leetcode.com/problems/find-mode-in-binary-search-tree/

// Solution 1 : Using extra vector space
class Solution {
public:
    void inorder(TreeNode* node, vector<int>& v){
        if(!node) return;
        inorder(node->left, v);
        v.push_back(node->val);
        inorder(node->right, v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        vector<int> modes;
        inorder(root, v);
        int maxCount = 0;
        int currentCount = 0;
        int currentVal = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == currentVal){
                currentCount++;
            }
            else{
                currentCount = 1;
                currentVal = v[i];
            }
            if(currentCount > maxCount){
                modes = {};
                maxCount = currentCount;
            }
            if(currentCount == maxCount){
                modes.push_back(v[i]);
            }
        }
        return modes;
    }
};

// Solution 2 : Without using any extra space
class Solution {
public:
    int maxCount = 0;
    int currentCount = 0;
    int currentVal = 0;
    void inorder(TreeNode* node, vector<int>& modes){
        if(!node) return;
        inorder(node->left, modes);
        if(node->val == currentVal){
            currentCount++;
        }
        else{
            currentCount = 1;
            currentVal = node->val;
        }
        if(currentCount > maxCount){
            modes = {};
            maxCount = currentCount;
        }
        if(currentCount == maxCount){
            modes.push_back(node->val);
        }
        inorder(node->right, modes);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> modes;
        inorder(root, modes);
        return modes;
    }
};