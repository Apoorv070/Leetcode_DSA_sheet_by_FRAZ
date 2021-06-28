//https://leetcode.com/problems/add-strings/
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int i = num1.length()-1; 
        int j = num2.length()-1;
        int carry = 0;
        while(i>=0 || j>=0 || carry){
            carry+=i>=0?num1[i]-'0':0;
            carry+=j>=0?num2[j]-'0':0;
            ans += to_string(carry%10);
            carry = carry/10;
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
