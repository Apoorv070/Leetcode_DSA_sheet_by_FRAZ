class Solution {
public:
    void dfs(vector<int>& visited,int i,vector<vector<int>>& isConnected,int n){
        visited[i] = 1;
        for(int j = 0 ; j < n ; j++ ){
            if(isConnected[i][j] and !visited[j])dfs(visited,j,isConnected,n);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n,0);
        int ans = 0;
        for(int i = 0 ; i < n ; i++ ){
            if(!visited[i]){
                dfs(visited,i,isConnected,n);
                ans++;
            }
        }
        return ans;
    }
};
