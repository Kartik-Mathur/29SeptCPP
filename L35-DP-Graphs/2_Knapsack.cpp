#include <iostream>
using namespace std;

int solve(int *price, int *weight, int n, int capacity) {
	// base case
	if (n == 0 || capacity == 0) {
		return 0;
	}

	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] +
		      solve(price, weight, n - 1, capacity - weight[n - 1]);
	}
	op2 = 0 + solve(price, weight, n - 1, capacity);
	return max(op1, op2);
}

int topdown(int *price, int *weight, int n, int capacity, int dp[][100]) {
	// base case
	if (n == 0 || capacity == 0) {
		return dp[n][capacity] = 0;
	}

	if (dp[n][capacity] != -1) return dp[n][capacity];

	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] +
		      topdown(price, weight, n - 1, capacity - weight[n - 1], dp);
	}
	op2 = 0 + topdown(price, weight, n - 1, capacity, dp);
	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *weight, int N, int capacity) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int m = 1; m <= capacity; ++m)
		{
			int op1, op2;
			op1 = op2 = INT_MIN;
			if (m >= weight[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][m - weight[n - 1]];
			}
			op2 = dp[n - 1][m];
			dp[n][m] = max(op1, op2);
		}
	}

	for (int n = 0; n <= N; ++n)
	{
		for (int m = 0; m <= capacity; ++m)
		{
			cout << dp[n][m] << " ";
		}
		cout << endl;
	}

	return dp[N][capacity];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int price[] = {4, 5, 1, 3};
	int weight[] = {2, 4, 1, 3};
	int n = sizeof(price) / sizeof(int);

	int capacity = 5;

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << solve(price, weight, n, capacity) << endl;
	cout << topdown(price, weight, n, capacity, dp) << endl;
	cout << bottomUp(price, weight, n, capacity) << endl;

	return 0;
}
















