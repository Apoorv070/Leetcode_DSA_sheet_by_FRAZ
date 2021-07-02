class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<pair<char,int>> st;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '('){
                st.push(make_pair('(',i));
            }else if(s[i]==')'){
                if(st.size()==0){
                    s[i] = '*';
                }else{
                    st.pop();
                }
            }
        }
        while(st.size()!=0){
            s[st.top().second] = '*';
            st.pop();
        }
        string ans = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i]!='*')ans+=s[i];
        }
        return ans;
    }
};
