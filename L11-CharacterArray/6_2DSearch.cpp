#include <iostream>
using namespace std;

int main() {
	int n, m, key;
	cin >> n >> m;

	int a[100][100];
	int num = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = num++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Enter key to find: ";
	bool flag = false;
	cin >> key;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key found: " << i << ", " << j << endl;
				flag = true;
				break;
			}
		}

		if (flag) {
			break;
		}
	}

	if (!flag) {
		cout << "Key not found\n";
	}
	return 0;
}
















