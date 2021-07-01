class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(m.find(sum)!=m.end() and abs(i-m[sum])>1)return true;
            m[sum] = i;
        }
        return false;
    }
};
