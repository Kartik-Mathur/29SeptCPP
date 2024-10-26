#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	i = 2;
	while (i <= n - 1) {
		// Agar n kisi bhi i se divide hua toh prime nahi hoga
		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0; // exit
		}

		i = i + 1;
	}

	// Agar loop se bahar aa gaye toh kisi bhi i se divide nahi hua
	cout << "Prime\n";


	return 0;
}
















