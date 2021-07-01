class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int x = A.size();
        int y = B.size();
        int dp[x+1][y+1];
        int maxi = INT_MIN;
    for(int i = 0 ; i <= x ; i++){
        for(int j = 0; j <=y ; j++){
            if(i==0||j==0){
                dp[i][j] = 0 ;
                continue;
            }
            
            if(A[i-1]==B[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = 0;
            }
            maxi = max(maxi,dp[i][j]);   
        }
    }
    return maxi;
    }
};
