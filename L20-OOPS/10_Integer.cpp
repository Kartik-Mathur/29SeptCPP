#include <iostream>
using namespace std;

int main() {

	int num, N;
	long long int ans = 1;
	cin >> N;

	int arr[100000];
	int n = 1;
	arr[0] = 1;

	for (int num = 1; num <= N; ++num)
	{
		int rem = 0;
		for (int i = 0; i < n; ++i)
		{
			int digit = arr[i];
			int ans = num * digit + rem;
			arr[i] = ans % 10;
			rem = ans / 10;
		}

		while (rem) {
			arr[n++] = rem % 10;
			rem /= 10;
		}
	}


	for (int i = n - 1; i >= 0; --i)
	{
		cout << arr[i];
	}
	cout << endl;

	return 0;
}
















