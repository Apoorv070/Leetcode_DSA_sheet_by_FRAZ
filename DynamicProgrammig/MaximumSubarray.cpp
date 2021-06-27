//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        int best = nums[0];
        dp[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            dp[i] = max(dp[i-1]+nums[i],nums[i]);
            if(dp[i]>best){
                best = dp[i];
            }
        }
        return best;
    }
};
