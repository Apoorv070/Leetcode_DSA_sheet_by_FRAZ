class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i = 0; i <= n ; i++){
            for(int j = 0 ; j <= m ; j++){
                if(i==0||j==0){
                    dp[i][j] = max(i,j);
                    //cout<<dp[i][j]<<" ";
                    continue;
                }
                
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = min(1+dp[i-1][j],min(1+dp[i][j-1],1+dp[i-1][j-1]));
                }
                //cout<<dp[i][j]<<" ";
            }
            //cout<<endl;
        }
        return dp[n][m];
        
    }
};
