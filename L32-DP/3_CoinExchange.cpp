#include <iostream>
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

int main() {

	int coins[] = {1, 7, 10};
	int n = sizeof(coins) / sizeof(int);


	cout << topDown(15, coins, n, dp) << endl;
	cout << coinExchange(15, coins, n) << endl;


	return 0;
}
















