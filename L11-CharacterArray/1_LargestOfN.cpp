#include <iostream>
#include <cstring>
using namespace std;

void updateLargest(char *a, char* b) {
	int n = strlen(b);
	for (int i = 0; i <= n; ++i)
	{
		a[i] = b[i];
	}
}

int main() {
	char a[1000], largest[1000];
	int n;
	cin >> n;
	int max_len = 0;

	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 1000);

		int len = strlen(a);
		if (len > max_len) {
			// Copy kardo a ko largest mei
			updateLargest(largest, a);
			// max_len ko update krdo because largest wali string update ho gai h
			max_len = len;
		}

	}

	cout << "Largest: " << largest << endl;



	return 0;
}
















