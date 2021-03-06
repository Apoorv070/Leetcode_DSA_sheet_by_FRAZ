//https://leetcode.com/problems/symmetric-tree/
class Solution {
public:
    bool mirror(TreeNode* root1 , TreeNode* root2){
            if (root1 == NULL && root2 == NULL) 
        return true; 
        if(root1 && root2 && root1->val == root2->val)
            return mirror(root1->left,root2->right)&&mirror(root1->right,root2->left);
        else 
            return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
         return mirror(root->left,root->right);
    }
};
