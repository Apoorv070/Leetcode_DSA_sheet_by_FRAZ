//https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans;
        for(int i =0 ;i<n;i++){
            if((nums[abs(nums[i])-1])<0){
                ans = abs(nums[i]);
                break;
            }
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
        }
        return ans;
        
        
    }
};

