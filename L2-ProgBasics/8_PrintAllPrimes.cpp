#include <iostream>
using namespace std;

int main() {

	int n, number, i;
	cin >> number;

	n = 2;
	while (n <= number) {

		// Check karo kya n prime hai?
		bool nDivideHua = false;
		// [2,n-1] kisi se divide nahi hoga
		i = 2;
		while (i <= n - 1) {
			if (n % i == 0) {
				nDivideHua = true;
			}

			i = i + 1;
		}

		// Agar kisi se divide nahi hua toh prime, print kardo n
		// Agar divide hogaya toh print mat krna n ko
		if (nDivideHua == false) {
			cout << n << " ";
		}

		n = n + 1;
	}

	cout << endl;



	return 0;
}
















