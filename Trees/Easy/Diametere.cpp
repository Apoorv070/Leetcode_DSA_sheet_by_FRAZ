// https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:
    pair<int,int> helper(TreeNode* root){
        pair<int,int> p;
        if(root==NULL){
            p.first = 0;
            p.second =0;
            return p;
        }
    
        pair lef = helper(root->left);
        pair righ = helper(root->right);
        p.first = max(lef.first,righ.first)+1;
        p.second = max(max(lef.second,righ.second),lef.first+righ.first);
        return p;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return helper(root).second;   
    }
};
