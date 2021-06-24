//https://leetcode.com/problems/binary-tree-right-side-view/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
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
        vector<int> v2;
    for(int i = 0 ; i < v.size() ; i++){
      v2.push_back(v[i].back());  
    }
        
     return v2;   
        
    }
};


//Recurcsion
class Solution {
public:
    void View(TreeNode* root,int cur_depth,int &covered_depth,vector<int>&v)
    {
        if(cur_depth>covered_depth){
            v.push_back(root->val);covered_depth+=1;}
        if(root->right)
            View(root->right,cur_depth+1,covered_depth,v);
        if(root->left)
            View(root->left,cur_depth+1,covered_depth,v);
            
            
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;int covered_depth=-1;
        if(root==NULL)
            return v;
        View(root,0,covered_depth,v);
        return v;
    }
};
