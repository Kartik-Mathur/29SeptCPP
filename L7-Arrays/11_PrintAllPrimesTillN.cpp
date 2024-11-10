#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= n - 1; ++i)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	printAllPrimes(n);

	return 0;
}
















