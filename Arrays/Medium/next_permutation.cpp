//https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int leni = nums.size();
        int j;
        int idx1 = 0,idx2 = 0 ;
        for(j = leni-1 ; j>0 ; j--){
            if(nums[j]>nums[j-1]){
                idx1 = j-1;
                break;
            }
        }
        if(j==0){
            sort(nums.begin(),nums.end());
        }else{
        for(j = leni-1 ; j>idx1 ; j--){
            if(nums[j]>nums[idx1]){
                idx2 = j;
                break;
            }
        }
        swap(nums[idx1],nums[idx2]);
        sort(nums.begin()+idx1+1,nums.end());
        }
        
    }
};
