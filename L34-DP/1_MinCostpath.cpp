#include <iostream>
using namespace std;

int cost[][4] = {
	{1, 1, 2, 3},
	{2, 1, 4, 5},
	{3, 1, 1, 1},
	{8, 10, 2, 1},
};

int minCost(int i, int j, int dp[][100]) {
	// base case
	if (i == 0 and j == 0) return dp[i][j] = cost[0][0];
	if (i < 0 || j < 0) return INT_MAX;

	if (dp[i][j] != -1) return dp[i][j];

	// recursive case
	int uparSeAaneKiMinCost = minCost(i - 1, j, dp);
	int leftSeAaneKiMinCost = minCost(i, j - 1, dp);

	return dp[i][j] = min(uparSeAaneKiMinCost, leftSeAaneKiMinCost) +
	                  cost[i][j];
}

int bottomUp(int n, int m) {
	int dp[100][100];


	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0 and j == 0) {
				dp[i][j] = cost[i][j];
			}
			else {
				int op1 = (i - 1 >= 0 ? dp[i - 1][j] : INT_MAX);
				int op2 = (j - 1 >= 0 ? dp[i][j - 1] : INT_MAX);

				dp[i][j] = min(op1, op2) + cost[i][j];
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
	cout << minCost(2, 2, dp) << endl;
	cout << bottomUp(2, 2) << endl;

	return 0;
}
















