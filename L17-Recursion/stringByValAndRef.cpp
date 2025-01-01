#include <iostream>
using namespace std;

void update(string &s) {
	s += 'd';
}

int main() {

	string s = "abc";
	cout << s << endl;
	update(s);
	cout << s << endl;

	return 0;
}
















