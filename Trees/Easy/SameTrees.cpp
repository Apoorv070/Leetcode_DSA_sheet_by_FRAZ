//https://leetcode.com/problems/same-tree/submissions/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q)return true;
        if(p and q==nullptr)return false;
        if(q and p==nullptr)return false;
        
        if(p->val!=q->val)return false;
        return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
    }
};
