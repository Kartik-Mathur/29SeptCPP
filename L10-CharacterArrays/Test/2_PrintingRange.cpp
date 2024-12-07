#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int max_sum = a[0];

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = 0;
			for (int k = i; k <= j; ++k)
			{
				cout << a[k] << " ";
				sum = sum + a[k];
			}
			cout << "," << "SUM: " << sum << endl;
			max_sum = max(max_sum, sum);
		}
	}

	cout << "Max Sum: " << max_sum << endl;



	return 0;
}
















