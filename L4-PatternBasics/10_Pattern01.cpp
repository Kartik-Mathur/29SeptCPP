#include <iostream>
using namespace std;

int main() {

	int n, row, i, no;
	cin >> n;

	for (row = 1; row <= n ; row = row + 1) {

		if (row % 2 == 0) {
			no = 0;
		}
		else {
			no = 1;
		}


		for (i = 1; i <= row; i = i + 1) {
			cout << no << " ";
			no = 1 - no;
		}

		cout << '\n';
	}

	return 0;
}
















