#include <iostream>
using namespace std;

int main() {

	int n, rem;
	cin >> n;

	int cnt = 0;

	while (n > 0) {
		rem = n % 2;

		cnt += rem; // cnt = cnt + rem;

		n /= 2; // n=n/2;
	}

	cout << "SetBits: " << cnt << endl;

	return 0;
}
















