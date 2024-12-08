#include <iostream>
using namespace std;

int main() {

	string a[10];
	int n = 3, i;

	a[0] = "Vaibhav";
	a[1] = "Ishika";
	a[2] = "Priyansh";

	string key = "Priyansh";

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Found key\n";
			break;
		}
	}
	if (i == n) {
		cout << "Key not found\n";
	}

	return 0;
}
















