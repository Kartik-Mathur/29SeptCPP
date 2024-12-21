#include <iostream>
using namespace std;
/*
int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}

	// recursive case: fibo(n) = fibo(n-1) + fibo(n-2);
	int chotaAns1 = fibo(n - 1);
	int chotaAns2 = fibo(n - 2);
	int badaAns = chotaAns1 + chotaAns2;
	return badaAns;
}
*/
int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}

	// recursive case: fibo(n) = fibo(n-1) + fibo(n-2);
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	cout << fibo(10) << endl;

	return 0;
}
















