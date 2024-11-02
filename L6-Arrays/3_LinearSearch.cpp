#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int i, ans = -1;
	int key;
	cout << "Enter key to find: ";
	cin >> key;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	/*
		if (i == n) {
			cout << "Key not found\n";
		}
		else {
			cout << "Key found at : " << ans << endl;
		}
	*/
	return 0;
}
















