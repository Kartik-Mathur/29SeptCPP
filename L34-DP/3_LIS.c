#include <iostream>
#include <vector>
using namespace std;
int a[] = {10, 9, 3, 5, 40, 11, 7, 18};
int n = sizeof(a) / sizeof(int);
int dp[1000];

int lisLen() {

	for (int i = 0; i < n; ++i) dp[i] = 1;
	for (int i = 1; i < n; ++i)
	{
		int ans = 1;
		for (int j = i - 1; j >= 0; --j)
		{
			if (a[j] < a[i]) {
				ans = max(ans, dp[j] + 1);
			}
		}

		dp[i] = ans;
	}

	int finalAns = 1;
	for (int i = 0; i < n; ++i) {
		finalAns = max(finalAns, dp[i]);
	}
	return finalAns;
}

void printLIS() {
	int k = 0;
	vector<int> v;
	for (int i = 1; i < n; ++i)
	{
		if (dp[i] > dp[k]) {
			k = i;
		}
	}

	int len = dp[k];
	while (len > 0) {
		if (dp[k] == len and (v.empty() || v.back() > a[k])) {
			v.push_back(a[k]);
			len--;
		}
		k--;
	}

	for (int i = v.size() - 1; i >= 0; --i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << lisLen() << endl;
	printLIS();




	return 0;
}
















