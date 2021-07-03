class Solution {
public:
int minDeletions(string str) {
        unordered_map<char, int> mp;
        for(auto c : str) mp[c]++;
        unordered_set<int> s;
        int ans=0;
        for(auto m : mp) {
            int frq = m.second;
            if(s.find(frq) != s.end()) {
                while(s.find(frq) != s.end())
                    frq--, ans++;
            }
            if(frq)
                s.insert(frq);
        }
        return ans;
    }
};
