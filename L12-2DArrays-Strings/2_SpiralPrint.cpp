#include <iostream>
using namespace std;

void initialiseArray(int a[][100], int n, int m) {
	int num = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = num++;
		}
	}
}

void print2D(int a[][100], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void spiralPrint(int a[][100], int n, int m) {
	int sr = 0, er = n - 1, sc = 0, ec = m - 1;

	while (sr <= er and sc <= ec) {
		// 1. print sr
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[sr][col] << " ";
		}
		sr++;

		// 2. print ec
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << " ";
		}
		ec--;

		// 3. print er
		if (er > sr) {
			for (int col = ec; col >= sc; --col)
			{
				cout << a[er][col] << " ";
			}
			er--;
		}

		// 4. print sc
		if (ec > sc) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}

	cout << endl;
}

int main() {

	int n, m;
	cin >> n >> m;

	int a[100][100];
	initialiseArray(a, n, m);
	print2D(a, n, m);

	spiralPrint(a, n, m);

	return 0;
}
















