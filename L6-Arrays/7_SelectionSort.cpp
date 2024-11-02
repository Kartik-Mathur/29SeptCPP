#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 1, 2, 3};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 1; ++i)
	{
		int min_indx = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[min_indx]) {
				min_indx = j;
			}
		}

		swap(a[i], a[min_indx]);
	}


	for (int k = 0; k < n; ++k)
	{
		cout << a[k] << " ";
	}
	cout << endl;

	return 0;
}
















