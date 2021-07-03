class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        if(s.length()==1)return 0;
        
        int i = 0; 
        int j = 1;
        int ans = 0;
        while(j<s.length()){
            if(s[i]==s[j]){
                if(cost[j]<cost[i]){
                   ans = ans + cost[j];
                    j++;
                }else{
                   ans = ans + cost[i];
                    i = j;
                    j++;
                }
            }else{
                i = j;
                j++;
            }
        }
        return ans;
 
    }
};
