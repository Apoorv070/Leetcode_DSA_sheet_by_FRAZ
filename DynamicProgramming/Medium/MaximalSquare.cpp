class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int dp[n][m];
        memset(dp,0,sizeof(dp));
        int ma = INT_MIN;
        for(int i = 0  ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(i==0||j==0){
                    dp[i][j] = matrix[i][j]-'0';
                    ma = max(ma,dp[i][j]);
                    continue;
                }
                
                if(matrix[i][j]=='0')
                    dp[i][j] = matrix[i][j]-'0';
                else{
                    dp[i][j] = min(1+dp[i-1][j],min(1+dp[i-1][j-1],1+dp[i][j-1]));
                }
                
                ma = max(ma,dp[i][j]);
            }
        }
        
        return ma*ma;
        
    }
};
