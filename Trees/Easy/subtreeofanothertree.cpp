// https://leetcode.com/problems/subtree-of-another-tree/
class Solution {
public:

bool issame(TreeNode* s, TreeNode* t){
    
    
    if(!s && !t) return true;
    if(!s || !t) return false;
    
    if(s->val !=t->val){
        
        return false;
    }
    
    return issame(s->left,t->left) && issame(s->right,t->right);
    
    
    
    
}



bool isSubtree(TreeNode* s, TreeNode* t) {
    
    if(!s){
        
        return false;
    }
    
    if(issame(s,t)) return true;
    
    return isSubtree(s->left,t) || isSubtree(s->right,t);
    
}
};
