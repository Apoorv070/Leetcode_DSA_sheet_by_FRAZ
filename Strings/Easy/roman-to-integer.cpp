//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ret = 0;
        for (int idx = 0; idx < s.size(); ++idx) {
            if ((idx < s.size()-1) && (m[s[idx]] < m[s[idx+1]])) {
                ret -= m[s[idx]];
            }
            else {
                ret += m[s[idx]];
            }
        }
        return ret;
    }
};
