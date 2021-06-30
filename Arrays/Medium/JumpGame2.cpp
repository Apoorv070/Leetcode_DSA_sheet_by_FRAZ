//https://leetcode.com/problems/jump-game-ii/
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]==0)return 0;
        else if(n==1)return 0;
        else{
            int max_reach = nums[0];
            int steps = nums[0];
            int jump = 1;
            
            for(int i = 1 ; i < n ; i++){
                if(i==n-1)break;
                max_reach = max(max_reach,i+nums[i]);
                steps--;

                if(steps==0){
                    if(max_reach<i){
                        return -1;
                    }
                    jump++;
                    steps = max_reach-i;//KEY line
                }
            }
            return jump;
        }
 
    }
};
