//https://leetcode.com/problems/word-search/

class Solution {
public:
    int n, m;
    bool dfs(int i, int j, vector<vector<char>> &board, vector<vector<bool>> &vis, string word){
        if(i < 0 || i >= n || j < 0 || j >= m || vis[i][j])
            return false;
        char c = board[i][j];
        if(c != word[0]){
            return false;
        }
        if(word.size() == 1)
            return true;
        vis[i][j] = true;
        bool ans =  dfs(i, j + 1, board, vis, word.substr(1))||
            dfs(i, j - 1, board, vis, word.substr(1))||
            dfs(i + 1, j , board, vis, word.substr(1))||
            dfs(i - 1, j , board, vis, word.substr(1));
        vis[i][j] = false;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(dfs(i, j, board, vis, word))
                    return true;
            }
        }
        return false;
    }
};
