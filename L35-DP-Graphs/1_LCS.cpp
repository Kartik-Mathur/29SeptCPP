#include <iostream>
#include <vector>
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


void printLCSALL(vector<char> &v, int dp[][100], int n, int m,
                 char* a, char *b) {
	if (n == 0 || m == 0) {

		for (int i = v.size() - 1; i >= 0; --i)
		{
			cout << v[i];
		}
		cout << endl;
		return;
	}


	if (a[n - 1] == b[m - 1]) {
		v.push_back(a[n - 1]);
		printLCSALL(v, dp, n - 1, m - 1, a, b);
		v.pop_back();
	}
	else {
		if (dp[n - 1][m] == dp[n][m]) printLCSALL(v, dp, n - 1, m, a, b);
		if (dp[n][m - 1] == dp[n][m]) printLCSALL(v, dp, n, m - 1, a, b);
	}
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
	char a[] = "abcde";
	char b[] = "acbd";
	int n = strlen(a);
	int m = strlen(b);

	cout << solve(a, strlen(a), b, strlen(b), dp) << endl;
	cout << bottomUp(a, strlen(a), b, strlen(b)) << endl;

	vector<char> v;
	printLCSALL(v, dp, strlen(a), strlen(b), a, b);


	// Printing LCS
	/*
	vector<char> v;
	int n = strlen(a), m = strlen(b);

	while (n >= 0 and m >= 0) {
		if (a[n - 1] == b[m - 1]) {
			v.push_back(a[n - 1]);
			n--;
			m--;
		}
		else {
			if (dp[n - 1][m] == dp[n][m]) n--;
			else m--;
		}
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i];
	}
	*/

	return 0;
}
















