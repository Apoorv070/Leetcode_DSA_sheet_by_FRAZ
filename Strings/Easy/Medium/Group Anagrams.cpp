class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s = strs;
        for(int i = 0 ; i < s.size() ; i++){
            sort(s[i].begin(),s[i].end());
        }
        
        map<string,vector<string>> m;
        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto i:m){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};
