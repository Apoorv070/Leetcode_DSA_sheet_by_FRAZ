class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int sum = 0;
        int prev = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum = (k==0) ? (sum + nums[i]) : (sum + nums[i]) % k;
            if(m.find(sum)!=m.end())return true;
            m[prev]++;
            prev = sum;
        }
        return false;
    }
};
