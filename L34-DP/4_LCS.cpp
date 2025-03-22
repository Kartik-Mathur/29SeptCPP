#include <iostream>
using namespace std;

int solve(char *a, int n, char *b, int m, int dp[][100]) {
	if (n == 0 || m == 0) {
		return dp[n][m] = 0;
	}

	if (dp[n][m] != -1) return dp[n][m];

	if (a[n - 1] != b[m - 1]) {
		return dp[n][m] = max(solve(a, n - 1, b, m, dp),
		                      solve(a, n, b, m - 1, dp));
	}
	return dp[n][m] = 1 + solve(a, n - 1, b, m - 1, dp);
}

int bottomUp(char *a, int n, char *b, int m) {
	int dp[100][100] = {0};

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (a[i - 1] != b[j - 1]) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else {
				dp[i][j] = 1 + dp[i - 1][j - 1];
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
	char a[] = "cabed";
	char b[] = "abedx";

	cout << solve(a, strlen(a), b, strlen(b), dp) << endl;
	cout << bottomUp(a, strlen(a), b, strlen(b)) << endl;

	return 0;
}
















