class Solution {
public:
    string helper(string& s,int& i){
        
        string ans = "";
        
        
        while(i<s.length() and s[i]!=']'){
            if(isdigit(s[i])){
                int k = 0 ;
                while(i<s.length() and isdigit(s[i])){
                    k = k*10 + s[i]-'0';
                    i++;
                }
                i++;
                string small_ans = helper(s,i);
                while(k--)
                    ans.append(small_ans);
                i++;
            }else{
                ans+=s[i++];
            }
        }
        
        return ans;
    }
    
    string decodeString(string s) {
        int i = 0;
        return helper(s,i);
    }
};
