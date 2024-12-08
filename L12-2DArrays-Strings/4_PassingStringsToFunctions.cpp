#include <iostream>
using namespace std;

// void updateString(string &x) {
void updateString(string x) {
	x += " World";
	cout << "Inside update: " << x << endl;
}

int main() {

	string s = "Hello";
	cout << s << endl;

	updateString(s);

	cout << s << endl;


	return 0;
}
















