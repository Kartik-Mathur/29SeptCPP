#include <iostream>
using namespace std;

void mergeStrings(char *a, char *b) {
	int i = strlen(a);
	int j = 0;

	int n = strlen(b);

	while (j <= n) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {

	char a[100] = "Hello";
	char b[] = "World";

	// a[] : HelloWorld
	cout <<  a << endl;
	mergeStrings(a, b);
	cout <<  a << endl;

	return 0;
}
















