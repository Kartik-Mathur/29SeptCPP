#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int solven3(int a[], int n) {
	int maxAns = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// In every [i,j], we have a subarray
			int ans = 0;
			for (int k = i; k <= j; ++k)
			{
				ans += a[k];
			}

			maxAns = max(maxAns, ans);

		}
	}

	return maxAns;

}

int solven2(int a[], int n) {

	// Calculate prefix sum
	int prefix[1000];
	for (int i = 0; i < n; ++i)
	{
		prefix[i] = (i - 1 >= 0 ? prefix[i - 1] : 0) + a[i];
		/*
		if (i - 1 >= 0) {
			prefix[i] = prefix[i - 1] + a[i];
		}
		else {
			prefix[i] = a[i];
		}
		*/
	}

	// printArray(prefix, n);
	int si, sj;

	int maxAns = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// In every [i,j], we have a subarray
			int ans = prefix[j] -  (i - 1 >= 0 ? prefix[i - 1] : 0);
			if (ans > maxAns) {
				si = i;
				sj = j;
				maxAns = ans;
			}

		}
	}

	cout << "Range: ";
	for (int i = si; i <= sj; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return maxAns;

}

int kadanes(int a[], int n) {
	// If all are negative then maximum of all would be the answer
	int mx_val = INT_MIN, i;
	for (i = 0; i < n; ++i)
	{
		if (a[i] >= 0) {
			break;
		}
		mx_val = max(mx_val, a[i]);
	}

	if (i == n) {
		return mx_val;
	}

	int ans = 0, sum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += a[i];

		if (sum < 0) sum = 0;

		ans = max(ans, sum);
	}
	return ans;
}

int main() {

	// int a[] = {1, 2, -40, 3, 15, -2, 6};
	int a[] = { -1, -2, -40, -3, -15, -2, -6};
	int n = sizeof(a) / sizeof(int);

	cout << solven3(a, n) << endl;
	cout << solven2(a, n) << endl;
	cout << kadanes(a, n) << endl;

	return 0;
}
















