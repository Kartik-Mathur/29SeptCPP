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

void print2DChar(char a[][100], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void generateRectangle(int a[][100], int n, int m) {
	int sr = 0, er = n - 1, sc = 0, ec = m - 1;
	int number = 0;

	while (sr <= er and sc <= ec) {
		// 1. print sr
		for (int col = sc; col <= ec; ++col)
		{
			a[sr][col] = number;
		}
		sr++;

		// 2. print ec
		for (int row = sr; row <= er; ++row)
		{
			a[row][ec]  = number;
		}
		ec--;

		// 3. print er
		if (er > sr) {
			for (int col = ec; col >= sc; --col)
			{
				a[er][col] = number;
			}
			er--;
		}

		// 4. print sc
		if (ec > sc) {
			for (int row = er; row >= sr; --row)
			{
				a[row][sc] = number;
			}
			sc++;
		}

		number = 1 - number;
	}

}

void generateRectangle1(char a[][100], int n, int m) {
	int sr = 0, er = n - 1, sc = 0, ec = m - 1;
	char number = '0';

	while (sr <= er and sc <= ec) {
		// 1. print sr
		for (int col = sc; col <= ec; ++col)
		{
			a[sr][col] = number;
		}
		sr++;

		// 2. print ec
		for (int row = sr; row <= er; ++row)
		{
			a[row][ec]  = number;
		}
		ec--;

		// 3. print er
		if (er > sr) {
			for (int col = ec; col >= sc; --col)
			{
				a[er][col] = number;
			}
			er--;
		}

		// 4. print sc
		if (ec > sc) {
			for (int row = er; row >= sr; --row)
			{
				a[row][sc] = number;
			}
			sc++;
		}

		number =  (number == '0' ? 'X' : '0');
	}

}


int main() {

	int n, m;
	cin >> n >> m;
	/*
	int a[100][100];
	generateRectangle(a, n, m);
	*/

	char a[100][100];
	generateRectangle1(a, n, m);
	print2DChar(a, n, m);


	return 0;
}
















