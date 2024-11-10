#include <iostream>
using namespace std;

void mergeSorted(int a[], int n, int b[], int m) {
	int i = n - 1, j = m - 1, k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			a[k] = a[i];
			k--;
			i--;
		}
		else {
			a[k] = b[j];
			k--;
			j--;
		}
	}

	// Agar upar wala loop over ho gaya and b[] mei elements bach gaye, toh add them
	// in a[]
	while (j >= 0) {
		a[k] = b[j];
		k--;
		j--;
	}
}

int main() {

	int a[7] = {3, 5, 7};
	int n = 3;

	int b[] = {1, 2, 4, 6};
	int m = sizeof(b) / sizeof(int);


	mergeSorted(a, n, b, m);

	for (int i = 0; i < m + n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















