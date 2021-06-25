//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
            
        if(nums.size() == 0) {
            return 0;
        }
        
        int i = 0;
        int j = 0;
        
        while (i < nums.size() && j < nums.size()) {
            if (nums[i] == nums[j]) {
                j++;
            } else {
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i + 1;
    }
};
