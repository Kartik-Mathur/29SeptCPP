#include <iostream>
#include <cstring> // memset
using namespace std;

int fibo(int n) {
	if (n <= 1) return n;

	return fibo(n - 1) + fibo(n - 2);
}
/*
int topDown(int n, int dp[]) {
	if (n <= 1) return dp[n] = n;

	if (dp[n] != -1) return dp[n]; // Agr nth fibo ka answer already pta hai use it

	// Agar ans nhi pata toh calculate karna padega
	int ans = topDown(n - 1, dp) + topDown(n - 2, dp);
	dp[n] = ans; // Answer pata chal gaya toh store krlo taaki dobara calculate na krna pade

	return ans;
}
*/
int topDown(int n, int dp[]) {
	if (n <= 1) return dp[n] = n;

	if (dp[n] != -1) return dp[n];

	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int bottomUp(int n) {
	int *dp = new int[n + 1]; // nth ka answer nth index par store hoga
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n]; // nth fibo number
}

int main() {

	int n;
	cin >> n;
	int dp[1000];
	memset(dp, -1, sizeof dp); // Har bucket mei -1 daal dega dp[] ke
	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















