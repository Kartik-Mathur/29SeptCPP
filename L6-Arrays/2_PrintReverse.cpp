#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[n - i - 1] << " ";
	}

	/*
		for (int i = n - 1; i >= 0; --i)
		{
			cout  << a[i] << " ";
		}
		cout << endl;
	*/
	return 0;
}
















