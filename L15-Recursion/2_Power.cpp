#include <iostream>
using namespace std;

int solve(int x, int n) {
	if (n == 0) return 1;

	return x * solve(x, n - 1);
}

int fastPower(int x, int n) {
	if (n == 0) return 1;

	int a = fastPower(x, n / 2);

	if (n & 1) {// if n is odd
		return a * a * x;
	}
	else {// else n is even
		return a * a;
	}
}

int main() {

	int x = 2, n = 4;

	cout << solve(x, n) << endl;
	cout << fastPower(x, n) << endl;

	return 0;
}
















