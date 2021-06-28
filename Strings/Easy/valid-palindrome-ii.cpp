//https://leetcode.com/problems/valid-palindrome-ii/
class Solution {
public:
    bool checkPalindrome(string& s, int l, int r){
        while(l<=r && s[l]==s[r]){
            l++;r--;
        }
        if(l>r)
            return true;
        return false;
    }
    
    bool validPalindrome(string s) {
        int l = 0; int r = s.length()-1;
        while(l<=r && s[l] == s[r]){
            l++;r--;
        }
        if(l>r)
            return true;
        
        if (checkPalindrome(s,l+1,r) || checkPalindrome(s,l,r-1)) 
            return true;
        return false;
    }
};
