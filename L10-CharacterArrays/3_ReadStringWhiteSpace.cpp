#include <iostream>
#include <cstring>
using namespace std;

void readString(char *a, int n, char delimiter = '\n') {
	char ch;
	int i = 0;

	ch = cin.get();

	while (i < n - 1 and ch != delimiter) {

		// cout << i << " character entered: " << ch << endl;
		a[i] = ch;

		i++;
		ch = cin.get();
	}

	a[i] = '\0';
}

int main() {
	char a[500];
	// readString(a, 500, '@');
	cin.getline(a, 500, '#');

	cout << a << endl;

	return 0;
}
















