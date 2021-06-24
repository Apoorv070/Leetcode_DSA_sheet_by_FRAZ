//https://leetcode.com/problems/invert-binary-tree/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        
        if(root->left==NULL&&root->right==NULL)
            return root;
        
        TreeNode * lef = root->left;
        TreeNode * rig = root->right;
        root->left  = rig;
        root->right = lef;
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        return root;
        
    }
};
