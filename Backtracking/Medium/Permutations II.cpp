class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int>& nums,int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        unordered_set<int> us;
        for(int j = i ; j <nums.size() ; j++){
            if(us.find(nums[j])!=us.end())continue;
            us.insert(nums[j]);
            swap(nums[i],nums[j]);
            helper(nums,i+1);
            swap(nums[i],nums[j]); 
            
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};
