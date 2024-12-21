#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n <= 1) return true;

	// recursive case
	if (a[0] < a[1] and isSorted(a + 1, n - 1)) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted2(int *a, int n) {
	// base case
	if (n == 0 || n == 1) return true;

	// recursive case
	if (a[n - 1] > a[n - 2] and isSorted2(a , n - 1)) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted3(int *a, int s, int e) {
	// base case
	if (s >= e) return true;

	// recursive case
	// 1. Divide the array
	int b[1000], c[1000];
	int mid = (s + e) / 2;
	for (int i = s; i <= mid; ++i) b[i] = a[i];
	for (int i = mid + 1; i <= e; ++i) c[i] = a[i];
	// 2. Ask recursion to solve chotiproblems b[] and c[]
	bool chotiProblem1 = isSorted3(b, s, mid); // Assumption
	bool chotiProblem2 = isSorted3(c, mid + 1, e); // Assumption

	// 3. Bade array ka pata krlo
	if (chotiProblem1 and chotiProblem2 and b[mid] < c[mid + 1]) {
		return true;
	}
	else return false;
}

bool isSorted4(int *a, int i, int n) {
	// base case
	if (i == n - 1) return true;

	// recursive case
	cout << "Comparing " << a[i] << ", " << a[i + 1] << endl;
	if (a[i] < a[i + 1] and isSorted4(a, i + 1, n)) return true;
	return false;
}

/*
bool isSorted4(int *a, int i, int n) {
	// base case
	if (i == n - 1) return true;

	// recursive case
	bool chotaSortedHai = isSorted4(a, i + 1, n);

	cout << "Comparing " << a[i] << ", " << a[i + 1] << endl;
	if ( chotaSortedHai and a[i] < a[i + 1]) {
		return true;
	}

	return false;
}
*/

int main() {

	int a[] = {1, 4, 8, 9};
	int n = sizeof(a) / sizeof(int);

	cout << isSorted4(a, 0, n) << endl;

	return 0;
}
















