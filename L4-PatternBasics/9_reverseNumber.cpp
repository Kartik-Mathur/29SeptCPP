#include <iostream>
using namespace std;

int main() {

	int n, rem, ans = 0;
	cin >> n; // Initialisation

	while (n > 0) {

		rem = n % 10;
		ans = ans * 10 + rem;

		n = n / 10;
	}

	cout << ans << endl;




	return 0;
}
















