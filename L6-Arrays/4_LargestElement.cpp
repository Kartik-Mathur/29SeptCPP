#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {4, 2, 1, 3, 5, 0};
	int n = sizeof(a) / sizeof(int);

	int largest = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > largest) {
			largest = a[i];
		}
	}

	cout << "Largest: " << largest << endl;

	return 0;
}
















