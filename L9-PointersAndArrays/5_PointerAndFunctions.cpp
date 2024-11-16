#include <iostream>
using namespace std;

// void print(int a[], int n) {
void print(int *arr, int n) {
	arr[0] = 20;

	for (int i = 0; i < n; ++i)
	{
		// cout << arr[i] << " ";
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	print(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















