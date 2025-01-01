#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string s =  "abcdef";

	int i = 3;
	// s.substr(index, numberofCharacters); // it will not change the original string s

	cout << s.substr(0, i) + s.substr(i + 1) << endl;

	return 0;
}
















