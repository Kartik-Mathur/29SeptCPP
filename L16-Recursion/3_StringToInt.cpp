#include <iostream>
using namespace std;

int stringToInt(char *a, int n) {
	// base case
	if (n == 0) return 0;
	// recursive case

	int digit = a[n - 1] - '0';
	return stringToInt(a, n - 1) * 10 + digit;
}

int main() {

	char a[] = "1234";

	cout << stringToInt(a, strlen(a)) * 100 + 2 << endl;


	return 0;
}
















