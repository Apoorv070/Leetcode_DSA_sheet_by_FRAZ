//https://leetcode.com/problems/balanced-binary-tree/

pair<int,bool> helper(TreeNode * root){
    pair<int,bool> p;
    if(root==NULL){
        p.first = 0;
        p.second = true;
        return p;
    }
    
    pair<int,bool> lef = helper(root->left);
    pair<int,bool> righ = helper(root->right);
    
    if(abs(lef.first-righ.first)<=1&&lef.second&&righ.second){
        p.first = max(lef.first,righ.first)+1;
        p.second = true;
    }else{
        p.first = max(lef.first,righ.first)+1;
        p.second = false;
    }
    
    return p;
    
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
       return helper(root).second;
    }
};
