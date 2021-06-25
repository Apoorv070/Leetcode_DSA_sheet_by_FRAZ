//https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1)
            return ;
        
        int i = 0;
        int j = 1;
        while(j<nums.size()){
            if(nums[i]==nums[j]&&nums[i]==0){
                j++;
                
            }    
            else if(nums[i]==0&&nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
                
            }
            else{
                i++;
                j++;
            }
        }
        
        return ;
    }
};
