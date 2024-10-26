#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {
			break;
		}

		i = i + 1;
	}


	if (i == n) {
		cout << n << " Prime Hai\n";
	}
	else {
		cout << n << " Prime Nahi Hai\n";
	}

	return 0;
}
















