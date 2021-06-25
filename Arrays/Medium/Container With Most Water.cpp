//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans = 0;
        
        int left = 0;
        int right = height.size()-1;
        int minHeight = 0;
        
        while(left < right)
        {
            ans = max (ans, (right-left) * min(height[left], height[right]) );
            
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        
        return ans;
        
    }
};
