//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return NULL;
        
        if (root == p || root == q)
            return root;
        
        TreeNode* llca = lowestCommonAncestor(root->left, p, q);
        TreeNode* rlca = lowestCommonAncestor(root->right, p, q);
        
        if (llca && rlca)
            return root;
        
        return llca ? llca : rlca;
    }
};
