//https://leetcode.com/problems/4sum/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    set<vector<int>> v;
    for(int i = 0; i<n-3 ; i++){
        for(int j = i+1 ;j<n-2 ; j++ ){
            int k1 = j+1;
            int l = n-1;
            while(k1<l){
                if(nums[i]+nums[j]+nums[k1]+nums[l]>target){
                    l--;
                }else if(nums[i]+nums[j]+nums[k1]+nums[l]<target){
                    k1++;
                }else{
                    vector<int> v1;
                    v1.push_back(nums[i]);
                    v1.push_back(nums[j]);
                    v1.push_back(nums[k1]);
                    v1.push_back(nums[l]);
                    v.insert(v1);
                    k1++;
                    l--;
                }
            }
        }
    }
    vector<vector<int>> v1(v.begin(),v.end());
    return v1;
        
    }
};
