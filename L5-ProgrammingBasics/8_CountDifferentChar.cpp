#include <iostream>
using namespace std;

int main() {
	int alpha, spaces, special, digits;
	alpha = special = spaces = digits = 0;
	char ch;

	ch = cin.get();

	while (ch != '$') {

		if ((ch >= 'A' and ch <= 'Z') || (ch >= 'a' and ch <= 'z')) {
			alpha++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\n' || ch == '\t') {
			spaces++;
		}
		else {
			special++;
		}

		ch = cin.get();
	}


	cout << "Alphabets  : " << alpha << endl;
	cout << "Digits     : " << digits << endl;
	cout << "Special    : " << special << endl;
	cout << "Spaces     : " << spaces << endl;

	return 0;
}
















