#include <iostream>
using namespace std;

bool solve(int *a, int n) {
	// base case
	if (n == 0) return false;
	// recursive case

	if (a[0] == 7) return true;

	return solve(a + 1, n - 1);
}

int main() {


	int a[] = {1, 2, 3, 71, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << solve(a, n) << endl;

	return 0;
}
















