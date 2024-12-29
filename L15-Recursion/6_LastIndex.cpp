#include <iostream>
using namespace std;

int solve(int *a, int n) {
	// base case
	if (n == 0) return -1;
	// recursive case

	if (a[n - 1] == 7)
		return n - 1;

	return solve(a, n - 1);
}

int main() {

	int a[] = {1, 7, 3, 7, 7, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << solve(a, n) << endl;


	return 0;
}
















