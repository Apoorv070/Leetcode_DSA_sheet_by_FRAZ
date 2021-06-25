//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int siz = prices.size();
        int mini = INT_MAX ;
        int prof = 0 ;
        for(int i = 0 ; i < siz ; i++){
            mini = min(prices[i],mini);
            if((prices[i]-mini)>=prof){
                prof = (prices[i]-mini);
            }

        }
        return prof;   
    }
};
