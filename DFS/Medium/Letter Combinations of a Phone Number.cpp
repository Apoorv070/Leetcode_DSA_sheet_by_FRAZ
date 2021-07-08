

class Solution {
public:   
    unordered_map<char, string> m = {{'2',"abc"}, {'3',"def"}, {'4',"ghi"},
    {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}};
    

    vector<string> letterCombinations(string digits) {
      
        vector<string> ans;

        if(digits.size()==0)
            return ans;
        
        char f_ele = digits[0];
        vector<string> v = letterCombinations(digits.substr(1));
        
       
        if(v.size()==0){
            string s = m[f_ele];
            for (auto x:s){
                string str;
                str+=x;
                ans.push_back(str);
            }
       
        }    
        
        else{
         for(auto it:m[f_ele]){
             for (auto z:v){
               ans.push_back(it+z);

             }
        }   
        }
       
        
        return ans;
    }
};
