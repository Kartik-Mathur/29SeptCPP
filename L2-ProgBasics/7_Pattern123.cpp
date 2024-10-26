#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	int number = 1;
	int row = 1;

	while (row <= n) {

		// row times ka loop lagega
		i = 1;
		while (i <= row) {

			cout << number << " ";

			number = number + 1;

			i = i + 1;
		}

		// Jab bhi row change hogi, next line par jaana h
		cout << endl;
		row = row + 1;
	}

	return 0;
}
















