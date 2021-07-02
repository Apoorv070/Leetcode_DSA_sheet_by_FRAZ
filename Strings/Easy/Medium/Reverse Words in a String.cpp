class Solution {
public:
    string reverseWords(string A) {
        string a = A;
        int i=0,n=a.length();
        string ans;
        while(i<n){
            while(i<n && a[i]==' ') i++;
            string tmp="";
            while(i<n && a[i]!=' '){
                tmp.push_back(a[i]);
                i++;
            }
            if(tmp.length()>0)
            ans=tmp+" "+ans;
        }
        ans.erase(ans.end()-1);
        return ans;
    }
};
