//https://leetcode.com/problems/divisor-game/

class Solution {
public:
    int dp[1001];
    int help(int n){

        if(n==1)return dp[n] =  0;
        if(dp[n]!=-1)
            return dp[n];
        else{
            for(int i = 1 ; i*i <= n ; i++){
                if(n%i==0){
                    if(help(n-i)==0)return dp[n] = 1;
                    if(i!=1 and help(n-(n/i))==0)return dp[n] = 1;
                }
            }
            return dp[n] = 0;
        }
    }
    bool divisorGame(int n) {
        //return n%2==0;
        memset(dp,-1,sizeof dp);
        return help(n);
    }
};

//
class Solution {
public:
    bool divisorGame(int n) {
        return n%2==0;
    }
};
