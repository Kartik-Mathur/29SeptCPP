#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
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

int maxCircularSum(int a[], int n) {
	int op1 = kadanes(a, n);
	int totalSum = 0;
	for (int i = 0; i < n; ++i)
	{
		totalSum += a[i];
		a[i] = -a[i];
	}

	int least_sum_original_array = kadanes(a, n);
	int op2 = totalSum + least_sum_original_array;
	return max(op1, op2);
}

int main() {

	// int a[] = {1, 2, -40, 3, 15, -2, 6};
	int a[] = { 1, 2, -40, -3, -15, 2, 6};
	int n = sizeof(a) / sizeof(int);

	cout << maxCircularSum(a, n) << endl;

	return 0;
}
















