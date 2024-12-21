#include <iostream>
using namespace std;
/*
int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case: fact(n) = n*fact(n-1)
	int chotaAns = fact(n - 1); // Assume
	int badaAns = n * chotaAns; // factorial of n
	return badaAns;
}
*/
int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case: fact(n) = n*fact(n-1)
	return n * fact(n - 1);
}

int main() {

	cout << fact(4) << endl;

	return 0;
}
















