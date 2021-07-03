class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> map;
        
        for(auto p : adjacentPairs){
            map[p[0]].push_back(p[1]);
            map[p[1]].push_back(p[0]);
        }
        
        int s;
        unordered_map<int, int> visit;
        for(auto &p : map){
            if(p.second.size() == 1){
               s = p.first; 
                break;
            }
                
        }
        
        vector<int> ans;
        while(!visit[s]){
            ans.push_back(s);
            visit[s] = 1;
            for(int v : map[s]){
                if(!visit[v])
                    s = v;
            }
        }
        
        return ans;
    }
};
