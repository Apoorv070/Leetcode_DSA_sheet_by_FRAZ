class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
vector<string> mat(numRows, "");
int i = 0, j = 0, dir;              // dir = 1 for down and dir = 0 for up
while(j < (int)s.size()) {
    if(i == 0) dir = 1;
    if(i == numRows - 1) dir = 0;
    mat[i] += s[j];
    j++;
    if(dir) i++;
    else i--;
}
string ans = "";
for(int i = 0; i < numRows; i++) ans += mat[i];
return ans;
        
    }
};
