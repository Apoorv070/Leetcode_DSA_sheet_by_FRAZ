//https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>> v;
     queue<TreeNode*> q;
     if(root)
     q.push(root);
     if(root)
     q.push(NULL);
     vector<int> v1;
     while(q.size()!=0){
         if(q.front()==NULL){
             
             q.pop();
             if(q.size()!=0){
                 q.push(NULL);
             }
             v.push_back(v1);
             v1.clear();
         }else{
             TreeNode* n = q.front();
             if(n->left)
             q.push(n->left);
             if(n->right)
             q.push(n->right);
             q.pop();
             v1.push_back(n->val);
         }
         
     }
        return v;
    }
};
