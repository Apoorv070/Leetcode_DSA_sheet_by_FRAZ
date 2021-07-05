class Solution {
public:
    
    void helper(vector<vector<int>> &ans,vector<int>& path,vector<int>& c,int target,int i){
        if(i==c.size()){
            if(target==0){
            ans.push_back(path);
            }return;
        }
            
        if(c[i]<=target){
                path.push_back(c[i]);
                helper(ans,path,c,target-c[i],i);
                path.pop_back();
        }
        helper(ans,path,c,target,i+1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        helper(ans,path,c,target,0);
        return ans;
    }

};
