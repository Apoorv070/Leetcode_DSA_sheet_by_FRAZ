class Solution {
public:
    bool checkp(string s,int n ,int i,int j){
	   while(i<j){
	       if(s[i]!=s[j]){
	           return false;
	       }
	       i++;
	       j--;
	   }
	   return true;
        
    }
    
    int countSubstrings(string s) {
        int n = s.length();
        int dp[n];
        dp[0] = 1;
        for(int i = 1 ; i < n ; i++){
            int ans = 1;
            for(int j = 0 ; j < i ; j++){
             if(checkp(s,n,j,i))
                 ans++;
            }
            dp[i] = dp[i-1]+ans;
        }
        
        return dp[n-1];
    }
};


////Gap Method
class Solution {
public:
int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        int dp[n][n];
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0) dp[i][j]=1;
                else if(g==1){
                    if(s[i]==s[j]) dp[i][j]=1;
                    else dp[i][j]=0;
                }
                else{
                    if(s[i]==s[j]&&dp[i+1][j-1]==1) dp[i][j]=1;
                    else dp[i][j]=0;
                }
                if(dp[i][j]==1) count++;
            }
        }
        return count;
    }
};
