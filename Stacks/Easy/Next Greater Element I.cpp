class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack <int> s;
        unordered_map <int, int> m;
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && s.top() < nums2[i]) {
                s.pop();
            }
            m[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }
        int n2 = nums1.size();
        vector<int> ans(n2);
        for (int i = 0; i < n2; i++) {
            ans[i] = m[nums1[i]];
        }
        return ans;
    }
};
