#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;


	for (int row = 1; row <= (n + 1) / 2; ++row)
	{
		// 1. Spaces
		for (int i = 0; i < n - (2 * row - 1); ++i)
		{
			cout << "  ";
		}

		// 2. Decreasing numbers
		for (int i = row; i >= 1; --i)
		{
			cout << i << " ";
		}

		if (row >= 2) {
			// 3. Spaces: row>=2
			for (int spaces = 1; spaces <= 2 * row - 3; ++spaces)
			{
				cout << "  ";
			}
			// 4. Increasing numbers: row>=2
			for (int i = 1; i <= row; ++i)
			{
				cout << i << " ";
			}
		}
		// 5. endl
		cout << endl;
	}


	// Pattern Mirror
	for (int row = (n + 1) / 2 - 1; row >= 1; --row)
	{
		// 1. Spaces
		for (int i = 0; i < n - (2 * row - 1); ++i)
		{
			cout << "  ";
		}

		// 2. Decreasing numbers
		for (int i = row; i >= 1; --i)
		{
			cout << i << " ";
		}

		if (row >= 2) {
			// 3. Spaces: row>=2
			for (int spaces = 1; spaces <= 2 * row - 3; ++spaces)
			{
				cout << "  ";
			}
			// 4. Increasing numbers: row>=2
			for (int i = 1; i <= row; ++i)
			{
				cout << i << " ";
			}
		}
		// 5. endl
		cout << endl;
	}
	return 0;
}
















