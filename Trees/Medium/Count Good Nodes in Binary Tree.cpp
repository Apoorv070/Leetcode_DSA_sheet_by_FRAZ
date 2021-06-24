// https://leetcode.com/problems/count-good-nodes-in-binary-tree/
class Solution {
public:
   void ans(TreeNode*root,int &c,int m){
        
        if(root==NULL)return;
        
        if(root->val>=m){
            c++;
            m=root->val;
        }
        
        ans(root->left,c,m);
        ans(root->right,c,m);
        
        
    }
    
    int goodNodes(TreeNode* root) {
       
        if(root==NULL) return 0;
        
        int m=root->val;
        
        int c=0;
         
        ans(root,c,m);
        return c;
    }
};
