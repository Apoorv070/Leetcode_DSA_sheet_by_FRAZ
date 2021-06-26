//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
bool isPalindrome(int x) {
        
        if(x<0) return false;
        if(!x) return true;
        
        string ss = to_string(x);
        int len = ss.length();
        
        for(int i=0, j=len-1; i<j; i++, j--) if(ss[i] != ss[j]) return false;
        
        return true;    
    }
};
