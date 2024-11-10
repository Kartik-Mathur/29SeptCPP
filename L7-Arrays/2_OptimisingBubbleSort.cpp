#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n - 1; ++i)
	{
		int cnt = 0;

		for (int j = 0 ; j <= n - 2; j++) {
			if (a[j] > a[j + 1]) {
				cnt++;
				swap(a[j], a[j + 1]);
			}
		}

		if (cnt == 0) {
			break;
		}

	}


	for (int k = 0; k < n; ++k)
	{
		cout << a[k] << " ";
	}
	cout << endl;

	return 0;
}
















