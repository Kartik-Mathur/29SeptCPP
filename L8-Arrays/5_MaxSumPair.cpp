#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 4, 2, -1, 3, 5};
	int n = sizeof(a) / sizeof(int);
	int maxSum = INT_MIN;
	int el1, el2;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] + a[j] > maxSum) {
				el1 = a[i];
				el2 = a[j];
				maxSum = a[i] + a[j];
			}
		}
	}

	cout << el1 << ", " << el2 << endl;

	return 0;
}
















