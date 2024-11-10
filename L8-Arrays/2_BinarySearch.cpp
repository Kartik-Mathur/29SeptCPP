#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			return mid;
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	return -1;
}

int main() {
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int key = 0;

	int ans = binarySearch(a, n, key);
	cout << ans << endl;

	return 0;
}
















