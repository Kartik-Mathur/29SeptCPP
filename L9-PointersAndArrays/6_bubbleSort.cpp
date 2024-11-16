#include <iostream>
using namespace std;

void print(int *arr, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

void bubbleSort(int *a, int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (*(a + j) > *(a + j + 1)) { // a[j + 1] = *(a+j+1)
				swap(*(a + j), *(a + j + 1));
			}
		}
	}
}


int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	print(a, n);
	bubbleSort(a, n);
	print(a, n);


	return 0;
}
















