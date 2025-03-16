#include <iostream>
#include <vector>
using namespace std;

int coinExchange(int amt, int *coins, int n) {
	if (amt == 0) return 0;

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= coins[i]) {
			int x = coinExchange(amt - coins[i], coins, n);
			if (x != INT_MAX) {
				ans = min(ans, x + 1);
			}
		}
	}

	return ans;
}

int topDown(int amt, int *coins, int n, int *dp) {
	if (amt == 0) return dp[amt] = 0;

	if (dp[amt] != -1) return dp[amt];

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= coins[i]) {
			int x = topDown(amt - coins[i], coins, n, dp);
			if (x != INT_MAX) {
				ans = min(ans, x + 1);
			}
		}
	}

	return dp[amt] = ans;
}

int bottomUp(int totalAmount, int *coins, int n) {
	vector<int> dp(totalAmount + 1, INT_MAX);

	dp[0] = 0;
	for (int amt = 1; amt <= totalAmount; ++amt)
	{
		int ans = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			if (amt >= coins[i]) {
				int choti_amt = amt - coins[i];
				if (dp[choti_amt] != INT_MAX) {
					ans = min(ans, dp[choti_amt] + 1);
				}
			}
		}

		dp[amt] = ans;
	}

	// for (int i = 0; i < dp.size(); ++i)
	// {
	// 	cout << dp[i] << " ";
	// }

	return dp[totalAmount];
}

int main() {

	int coins[] = {1, 7, 10};
	int n = sizeof(coins) / sizeof(int);

	int dp[100000];
	memset(dp, -1, sizeof dp);

	cout << topDown(15, coins, n, dp) << endl;
	cout << bottomUp(15, coins, n) << endl;
	cout << coinExchange(15, coins, n) << endl;


	return 0;
}
















