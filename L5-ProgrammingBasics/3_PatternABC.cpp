#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	int row;
	char ch;
	row = 1;
	while (row <= n) {
		// Print increasing characters
		ch = 'A';
		for (i = 1; i <= n - row + 1; i++) {
			cout << ch;
			ch++;
		}

		// cout << ", outside i loop value of ch: " << ch;
		ch--;
		for (i = 1; i <= n - row + 1; i++) {
			cout << ch;
			ch--;
		}


		cout << endl;
		row++;
	}

	return 0;
}
















