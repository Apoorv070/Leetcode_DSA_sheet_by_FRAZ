//https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0,sum = 0;
        int right_sum;
        for(int i = 0 ; i < nums.size() ; i++)
            sum = sum + nums[i];
        right_sum = sum;
        
        for(int i = 0 ; i < nums.size() ; i++){
            right_sum = right_sum - nums[i];
            if(left_sum == right_sum)
                return i;
            left_sum = left_sum + nums[i];
        }
        return -1;
    }
};
