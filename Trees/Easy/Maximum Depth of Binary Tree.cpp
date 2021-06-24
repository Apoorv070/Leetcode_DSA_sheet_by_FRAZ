//https://leetcode.com/problems/maximum-depth-of-binary-tree/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return !root ? 0:1+max(maxDepth(root->left),maxDepth(root->right));
    }
};
