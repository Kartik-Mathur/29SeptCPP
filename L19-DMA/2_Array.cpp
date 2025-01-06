#include <iostream>
using namespace std;

int * createArray(int n) {
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	return arr;
}

int main() {

	int n = 5;
	int *a = createArray(n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	delete []a;
	a = NULL;

	return 0;
}
















