class Solution {
public:
	int coinChange(vector<int>& coins, int amount) {

		int n = coins.size();

		vector<vector<int>> memo(n+1, vector<int>(amount+1, -1));
		int ans = changeDp(coins, n, amount, memo);

		return ans == INT_MAX - 1 ? -1 : ans;
	}

	int changeDp(vector<int> & coins, int n, int amount, vector<vector<int>> &memo) {

		if (n == 0 || amount < 0) return INT_MAX-1;

		if (amount == 0) return 0;

		if (memo[n][amount] != -1) return memo[n][amount];
			
		
		return memo[n][amount] = min (
						changeDp(coins, n-1, amount, memo) , 
					    1 + changeDp(coins, n, amount-coins[n-1], memo)
				 );
	}
};
