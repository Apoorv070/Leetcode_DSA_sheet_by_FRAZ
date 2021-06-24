//https://leetcode.com/problems/merge-two-binary-trees/
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* a, TreeNode* b) {
    if(a==NULL and b==NULL)return nullptr;
    if(a==NULL)return b;
    if(b==NULL)return a;
    
    TreeNode* t = new TreeNode(a->val+b->val);
    t->left = mergeTrees(a->left,b->left);
    t->right = mergeTrees(a->right,b->right);
    return t;
    }
};
