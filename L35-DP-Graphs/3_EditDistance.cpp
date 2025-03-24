#include <iostream>
using namespace std;

int solve(string &s1, string &s2, int n, int m) {
	// base case
	if (n == 0)  return m;
	if (m == 0)  return n;

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return solve(s1, s2, n - 1, m - 1);
	}
	else {
		int op1, op2, op3;
		// 1. deletion
		op1 = solve(s1, s2, n - 1, m);
		// 2. insertion
		op2 = solve(s1, s2, n, m - 1);
		// 3. updation
		op3 = solve(s1, s2, n - 1, m - 1);
		return 1 + min(op1, min(op2, op3));
	}
}

int topDown(string &s1, string &s2, int n, int m, int dp[][100]) {
	// base case
	if (n == 0)  return dp[n][m] = m;
	if (m == 0)  return dp[n][m] = n;

	if (dp[n][m] != -1) return dp[n][m];

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = topDown(s1, s2, n - 1, m - 1, dp);
	}
	else {
		int op1, op2, op3;
		// 1. deletion
		op1 = topDown(s1, s2, n - 1, m, dp);
		// 2. insertion
		op2 = topDown(s1, s2, n, m - 1, dp);
		// 3. updation
		op3 = topDown(s1, s2, n - 1, m - 1, dp);
		return dp[n][m] = 1 + min(op1, min(op2, op3));
	}
}

int bottomUp(string &s1, string &s2) {
	int n = s1.size();
	int m = s2.size();
	int dp[100][100];
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if (s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else {
				int op1 = dp[i - 1][j];
				int op2 = dp[i][j - 1];
				int op3 = dp[i - 1][j - 1];

				dp[i][j] = 1 + min(op1, min(op2, op3));
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}


	return dp[n][m];

}


int main() {

	string s1 = "Saturday";
	string s2 = "Sunday";

	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << solve(s1, s2, s1.size(), s2.size()) << endl;
	cout << topDown(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;

	return 0;
}
















