//https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> pre(n),suf(n);
 
        for(int i = 0 ; i < n ; i++){
            i==0?pre[i]=nums[i]:pre[i]=pre[i-1]*nums[i];
        }
        
        for(int j = n-1 ; j>=0 ;j--){
            j==n-1?suf[j]=nums[j]:suf[j]=suf[j+1]*nums[j];
        }
        
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            if(i==0){
                ans[i] = suf[i+1];
            }else if(i==n-1){
                ans[i] = pre[i-1];
            }else{
                ans[i] = pre[i-1]*suf[i+1];
            }
        }
        
        return ans;
    }
};
