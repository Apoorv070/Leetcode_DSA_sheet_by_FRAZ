class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& small,int n,int k,int ind){
        if(small.size()==k){
            ans.push_back(small);
            return ;
        }
        
        
        for(int i  = ind ; i <=n ; i++){
            small.push_back(i);
            helper(small,n,k,i+1);
            small.pop_back();
        }

        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> small;
        helper(small,n,k,1);
        return ans;
    }
};
