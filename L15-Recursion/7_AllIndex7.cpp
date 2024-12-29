#include <iostream>
using namespace std;

void solve(int *a, int n, int i) {
	// base case
	if (i == n) return;
	// recursive case
	if (a[i] == 7) cout << i << " ";
	solve(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 7, 7, 3, 4, 7, 5};
	int n = sizeof(a) / sizeof(int);


	solve(a, n, 0);

	return 0;
}
















