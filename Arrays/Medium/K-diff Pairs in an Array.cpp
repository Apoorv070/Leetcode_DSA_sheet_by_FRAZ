class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int n : nums) m[n]++;
        int cnt = 0;
        for (auto p : m) {
            if ((!k && p.second > 1) || (k && m.count(p.first + k))) ++cnt;
        }
        return cnt;
    }
};
