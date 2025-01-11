#include <iostream>
using namespace std;

class Factorial {
public:
	int arr[1000];
	int n;

	Factorial(int N) {
		arr[0] = 1;
		n = 1;

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
	}

	void print() {
		for (int i = n - 1; i >= 0; --i)
		{
			cout << arr[i];
		}
		cout << endl;
	}
};

int main() {

	int num, N;
	long long int ans = 1;
	cin >> N;

	Factorial f(100);
	f.print();






	return 0;
}
















