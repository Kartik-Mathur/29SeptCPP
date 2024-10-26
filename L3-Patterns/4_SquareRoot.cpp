#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float inc = 1;
	float ans = 0;


	int cp = 1;
	while (cp <= 3) {

		while (ans * ans <= n) {
			ans = ans + inc;
		}
		ans = ans - inc;

		inc = inc / 10;

		cp = cp + 1;
	}

	/*
		// Finding 1st precision
		inc = inc / 10; // 0.1

		while (ans * ans <= n) {
			ans = ans + inc;
		}
		ans = ans - inc;

		// Finding 2nd precision
		inc = inc / 10; // 0.01

		while (ans * ans <= n) {
			ans = ans + inc;
		}
		ans = ans - inc;
	*/

	cout << ans << endl;

	return 0;
}
















