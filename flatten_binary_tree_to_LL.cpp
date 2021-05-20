/*Given the root of a binary tree, flatten the tree into a "linked list":

The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree.*/

class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return;
        }
        
        
        TreeNode* temp = root;
        swap(root->right, root->left);
        
        while(temp->right!=NULL) temp = temp->right;
        
        temp->right = root->left;
        root->left = NULL;
        
        flatten(root->right);
    }
};