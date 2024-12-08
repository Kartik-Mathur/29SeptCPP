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

void stairCaseSearch(int a[][100], int n, int m, int key) {
	int i = 0, j = m - 1;
	bool flag = false;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Key found at " << i << ", " << j << endl;
			flag = true;
			break;
		}
		else if (key > a[i][j]) i++;
		else j--;
	}

	if (flag == false) {
		cout << "Key not found\n";
	}
}

int main() {

	int n, m;
	cin >> n >> m;

	int a[100][100];
	initialiseArray(a, n, m);
	print2D(a, n, m);
	stairCaseSearch(a, n, m, 16);


	return 0;
}
















