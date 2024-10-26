#include <iostream>
using namespace std;

int main() {

	int number;
	cin >> number;

	int n = 2;
	while (n <= number) {

		int i = 2;
		while (i <= n - 1) {

			if (n % i == 0) {
				break;
			}

			i = i + 1;
		}


		if (i == n) {
			cout << n << " ";
		}

		n = n + 1;
	}
	cout << endl;

	return 0;
}
















