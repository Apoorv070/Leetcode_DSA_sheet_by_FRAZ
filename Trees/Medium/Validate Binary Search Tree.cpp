//https://leetcode.com/problems/validate-binary-search-tree/
class Solution {
public:
bool isValidBST(TreeNode* root) {
    if(root == NULL){return true;}
    //inorder traverse
    return check(root, LONG_MIN, LONG_MAX);
}
bool check(TreeNode* root, long min, long max){
    if(root == nullptr) return true;
    if(root->val <= min || root->val >= max) return false;
    return check(root->left, min, root->val) && check(root->right, root->val, max);
}
};
