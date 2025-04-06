#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 1000;
	vector<bool> arr(n + 1, true);
	arr[0] = arr[1] = false;

	for (int i = 2; i * i <= n; ++i)
	{
		if (arr[i]) {
			for (int j = i * i; j <= n; j += i)
			{
				arr[j] = false;
			}
		}
	}

	for (int i = 2; i <= 100; ++i)
	{
		if (arr[i]) {
			cout << i << " ";
		}
	}
	cout << endl;





	return 0;
}
















