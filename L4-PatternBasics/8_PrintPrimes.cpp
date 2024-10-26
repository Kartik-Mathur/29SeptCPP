#include <iostream>
using namespace std;

int main() {

	int i, number, n;
	cin >> number;

	for (n = 2; n <= number ; n = n + 1) {
		// To check n is prime or not
		for (i = 2 ; i <= n - 1 ; i = i + 1) {
			if (n % i == 0) {
				break;
			}
		}

		if (i == n) {
			cout << n << " ";
		}

	}

	cout << endl;


	return 0;
}
















