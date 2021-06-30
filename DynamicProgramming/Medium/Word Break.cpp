class Solution {
public:
    bool search(vector<string>& wordDict,string left){
        for(int i = 0 ; i < wordDict.size() ; i++){
            if(wordDict[i]==left)return true;
        }
        return false;
    }
    bool helper(string s, vector<string>& wordDict,map<string,bool>& m) {
        if(search(wordDict,s))return true;
        if(m.find(s)!=m.end()){
            return m[s];
        }
        for(int i = 1 ; i < s.length() ; i++){
            string left = s.substr(0,i);
            string right = s.substr(i);
            if(search(wordDict,left) and helper(right,wordDict,m))
                return m[s] = true;
        }
        return m[s] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,bool> m;
        return helper(s,wordDict,m);
    }
};
