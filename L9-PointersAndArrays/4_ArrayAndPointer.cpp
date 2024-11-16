#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int* x = &a[0];


	for (int i = 0; i < n; ++i)
	{
		// cout << a[i] << " "; // a[i] === *(a+i)
		cout << *(x + i) << " ";
	}
	cout << endl;

	return 0;
}
















