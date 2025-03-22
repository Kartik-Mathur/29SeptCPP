#include <iostream>
using namespace std;

int elephantWays(int i, int j, int dp[][100]) {
	// base case
	if (i == 0 and j == 0) return dp[i][j] = 1;
	if (dp[i][j] != -1) return dp[i][j];

	// recursive case
	int ans = 0;
	for (int k = 0; k <= i - 1; ++k)
	{
		ans += elephantWays(k, j, dp);
	}

	for (int k = 0; k <= j - 1; ++k)
	{
		ans += elephantWays(i, k, dp);
	}

	return dp[i][j] = ans;
}

int bottomUp(int n, int m) {
	int dp[100][100];

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (!i and !j) dp[i][j] = 1;
			else {
				int ans = 0;
				for (int k = 0; k <= i - 1; ++k)
				{
					ans += dp[k][j];
				}

				for (int k = 0; k <= j - 1; ++k)
				{
					ans += dp[i][k];
				}

				dp[i][j] = ans;
			}
		}
	}

	return dp[n][m];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << elephantWays(3, 3, dp) << endl;
	cout << bottomUp(3, 3) << endl;



	return 0;
}
















