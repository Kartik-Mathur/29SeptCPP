#include <iostream>
using namespace std;

int main() {
	int a[7] = {1, 2, 3, 4, 5, -6, 4};
	int n = sizeof(a) / sizeof(int);
	int max_sum = a[0];

	int ps[7];
	ps[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		ps[i] = ps[i - 1] + a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << ps[i] << " ";
	}
	cout << endl;



	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = 0;
			if (i - 1 >= 0) {
				sum = ps[j] - ps[i - 1];
			}
			else {
				sum = ps[j];
			}
			// cout << "," << "SUM: " << sum << endl;
			max_sum = max(max_sum, sum);
		}
	}

	cout << "Max Sum: " << max_sum << endl;



	return 0;
}
















