#include <iostream>
using namespace std;

int main() {

	// Will create 10 string buckets
	string a[10];
	int n = 3;

	a[0] = "Vaibhav";
	a[1] = "Ishika";
	a[2] = "Priyansh";

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < a[i].size(); ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}
















