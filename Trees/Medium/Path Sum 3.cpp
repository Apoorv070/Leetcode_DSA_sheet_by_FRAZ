//https://leetcode.com/problems/path-sum-iii/

class Solution {
    int pathSum_a(TreeNode* root, int sum){
        if(root == nullptr) return 0;
        int res = 0;
        if(root->val == sum) res++;
        res += pathSum_a(root->left, sum-root->val);
        res += pathSum_a(root->right, sum-root->val);
        return res;
    }
public:
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        return pathSum(root->left, sum) + pathSum_a(root, sum) + pathSum(root->right, sum);
    }
};
