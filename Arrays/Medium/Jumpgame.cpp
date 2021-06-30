//https://leetcode.com/problems/jump-game/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        dp[0]=1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(dp[i]==1){
                for(int j = i+1 ; j <= (i+nums[i]) and j<nums.size(); j++){
                    dp[j] = 1;
                }
            }
        }
//         for(int i = 0 ; i < dp.size(); i++){
//             cout<<dp[i]<<" ";
            
//         }
        
        if(dp[nums.size()-1]==1)
            return true;
        else
            return false;
    }
};
