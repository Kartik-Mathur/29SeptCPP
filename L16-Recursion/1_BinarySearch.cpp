#include <iostream>
using namespace std;

int binarySearch(int *a, int s, int e, int key) {
	// base case
	if (s > e) return -1;

	// recursive case
	int mid = (s + e) / 2;
	if (a[mid] == key) return mid;
	else if (key > a[mid]) return binarySearch(a, mid + 1, e, key);
	else return binarySearch(a, s, mid - 1, key);
}
/*
int binarySearch(int *a, int s, int e, int key) {
	if (s <= e) {
		// recursive case
		int mid = (s + e) / 2;
		if (a[mid] == key) return mid;
		else if (key > a[mid]) return binarySearch(a, mid + 1, e, key);
		else return binarySearch(a, s, mid - 1, key);
	}
	else return -1;
}
*/

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << binarySearch(a, 0, n - 1, 10) << endl;

	return 0;
}
















