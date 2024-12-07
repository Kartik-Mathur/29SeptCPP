#include <iostream>
using namespace std;

int main() {

	// int a[] = {1, 2, 4, -8, 3, 6, -10, 12, 4, -3, 8};
	int a[] = { -1, -2, -3, -4, -5};
	int n = sizeof(a) / sizeof(int);
	int max_sum = a[0];
	int max_element = a[0];
	bool isPositiveNumberPresent = false;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > 0) {
			isPositiveNumberPresent = true;
		}
		max_element = max(max_element, a[i]);
	}

	if (isPositiveNumberPresent == false) {
		cout << max_element << endl;
		return 0;
	}

	int s = 0;

	for (int i = 0; i < n; ++i)
	{
		s = s + a[i];
		if (s < 0) s = 0;

		max_sum = max(max_sum, s);
	}

	cout << "Max Sum: " << max_sum << endl;

	return 0;
}
















