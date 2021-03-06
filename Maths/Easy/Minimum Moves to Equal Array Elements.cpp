//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        int mne = INT_MAX;
        for (int i = 0; i < n; i++) {
            mne = min(mne, nums[i]);
        }
        
        int ans  = 0;
        for (int i = 0; i < n; i++) {
            ans += nums[i] - mne;
        }
        
        return ans;
    }
};
