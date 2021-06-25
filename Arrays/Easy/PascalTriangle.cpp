//https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i = 0 ; i <numRows ; i++){
            v[i] = vector<int>(i+1);
            for(int j = 0 ; j <=i ; j++){
               if(j==0||j==i){
                   v[i][j]=1;
               }else{
                   v[i][j] = v[i-1][j-1]+v[i-1][j];
               }
            }
        }
        
        return v;
    }
};


//Trick
#define pb push_back
vector<int> getRow(int A) {
vector<int> res;
long long num = 1;
res.push_back(num);
for(int i=1;i<=A;i++){
    num *= (A-i+1);
    num /= i;
    res.push_back(num);
}
return res;
}

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    for(int j = 0 ; j <= A ; j++){
    vector<int> res = getRow(j);
    ans.pb(res);
    }
    return ans;
}
