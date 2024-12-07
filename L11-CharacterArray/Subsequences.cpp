#include <iostream>
using namespace std;

int main() {

	char arr[] = "abc";
	int len = strlen(arr);

	for (int i = 0; i < (1 << len); ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			if (i & (1 << j)) {
				cout << arr[j];
			}
		}

		cout << endl;
	}

	return 0;
}
















