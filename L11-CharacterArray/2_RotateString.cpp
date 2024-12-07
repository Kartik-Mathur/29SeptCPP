#include <iostream>
using namespace std;

void rotateString(char*a, int n) {
	int len = strlen(a);
	n = n % len;

	if (n == 0) return;

	// 1. Shift all characters n times ahead
	int i = len - 1;
	while (i >= 0) {
		a[i + n] = a[i];
		i--;
	}

	// 2. Bring last n characters to the front of the array
	i = len;
	int j = 0;
	while (j < n) {
		a[j] = a[i];
		j++;
		i++;
	}

	// 3. Add Null character to finalise the string
	a[len] = '\0';
}

int main() {

	char a[1000] = "Coding";
	int n = 5012342;
	rotateString(a, n);
	cout << a << endl;


	return 0;
}
















