#include <iostream>
using namespace std;

int main() {

	char ch = 'A';
	int x = 1000;
	float f = 1.11;
	char ch1 = 'B';

	char *chp = &ch;

	cout << "ch  : " << ch << endl;
	cout << "(int)ch  : " << (int)ch << endl;
	cout << "sizeof(&ch)  : " << sizeof(&ch) << endl;
	cout << "ch           : " << ch << endl;
	cout << "&ch          : " << &ch << endl;
	cout << "&ch1         : " << &ch1 << endl;
	cout << "(void*)&ch1  : " << (void*)(&ch1) << endl;
	cout << "(int*)&ch1   : " << (int*)(&ch1) << endl;

	return 0;
}
















