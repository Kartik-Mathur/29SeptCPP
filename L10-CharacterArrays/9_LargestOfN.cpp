/*
n = 4
Hello
Worlds
CodingBlocks
Coder

Output: CodingBlocks
*/
#include <iostream>
using namespace std;

void copyString(char* a, char *b) {
	// a[] ke andar b[] ko copy krdo
	int n = strlen(b);
	for (int i = 0; i <= n; ++i)
	{
		a[i] = b[i];
	}
}

int main() {
	char a[100], largest[100];
	int n;
	int max_len = 0; // to store the len of largest string

	cin >> n;// user kitni strings input dega
	cin.ignore(); // cin.getline agar use krna h int input ke baad yeh lagega

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		int len = strlen(a);
		// cout << "You entered: " << a << ", length: " << len << endl;
		if (len > max_len) {
			max_len = len;
			// Copy kardo a[] ko largest[] ke andar
			copyString(largest, a);
		}
	}

	cout << "Largest string          : " << largest << endl;
	cout << "Largest string length is: " << max_len << endl;

	return 0;
}
















