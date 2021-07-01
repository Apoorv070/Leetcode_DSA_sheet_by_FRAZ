class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
   int n = nums.size();
   int dp[n];
   dp[0]=1;
   int maxi = dp[0];
   for(int i = 1 ; i<n ; i++){
       dp[i] = 1;
       int val = 0;
       for(int j = i-1 ; j>=0 ; j--){
           if(nums[i]>nums[j]){
               val = max(val,dp[j]);
           }
       }
       dp[i]=val+1;
       maxi = max(maxi,dp[i]);
   }
   
   return maxi;
    }
};


// NLOG(N)
class Solution {
public:
int lengthOfLIS(vector<int>& nums) {
    vector<int> res;
    for(int i=0; i<nums.size(); i++) {
        auto it = lower_bound(res.begin(), res.end(), nums[i]);
        if(it==res.end()) res.push_back(nums[i]);
        else *it = nums[i];
    }
    return res.size();
}
};
