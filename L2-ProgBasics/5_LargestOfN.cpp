#include <iostream>
#include <climits> // INT_MIN: -2^31, INT_MAX: 2^31 - 1
using namespace std;

int main() {

	int largest = INT_MIN;
	int n, i, num;
	// User se pucho kitne number dega
	cin >> n;

	// Ab n numbers ip ke liye loop lagega
	i = 1;
	while (i <= n) {
		// Ek ek karke num ka input lo user se, agr yeh num bada hai
		// largest se toh usse update krdo
		cin >> num;

		if (num > largest) {
			largest = num;
		}

		i = i + 1;
	}

	cout << "Largest: " << largest << endl;

	return 0;
}
















