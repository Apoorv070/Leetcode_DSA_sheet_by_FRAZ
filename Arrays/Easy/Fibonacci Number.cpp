//https://leetcode.com/problems/fibonacci-number/
#define mod 1000000007
class Solution {
public:
    void multiply(long long int mat[2][2],long long int mat1[2][2]){
    long long int fvalue = ((mat[0][0]*mat1[0][0])%mod+(mat[0][1]*mat1[1][0])%mod)%mod;
    long long int svalue = ((mat[0][0]*mat1[0][1])%mod+(mat[0][1]*mat1[1][1])%mod)%mod;
    long long int tvalue = ((mat[1][0]*mat1[0][0])%mod+(mat[1][1]*mat1[1][0])%mod)%mod;
    long int fovalue = ((mat[1][0]*mat1[0][1])%mod+(mat[1][1]*mat1[1][1])%mod)%mod;
    mat[0][0] = fvalue;
    mat[0][1] = svalue;
    mat[1][0] = tvalue;
    mat[1][1] = fovalue;
    
}
void pow(long long int mat[2][2],int n){
    if(n==0||n==1)
    return ;
    pow(mat,n/2);
    multiply(mat,mat);
     if(n%2!=0){
         long long int mat1[2][2] = {{1,1},{1,0}};
         multiply(mat,mat1);
     }
     
 }
int fib(int N) 
{
    int A = N;
        if(A==0)return 0;
    long long int mat[2][2] = {{1,1},{1,0}};
    pow(mat,A-1);
    return (int)mat[0][0];

}
};
