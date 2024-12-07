#include <iostream>
using namespace std;

int main() {
	int n, m;
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


	//  Wave print
	for (int c = 0; c < m; ++c)
	{
		if (c % 2 != 0) {
			for (int r = n - 1; r >= 0; r--)
			{
				cout << a[r][c] << " ";
			}
		}
		else {
			for (int r = 0; r < n; ++r)
			{
				cout << a[r][c] << " ";
			}
		}
	}

	return 0;
}
















