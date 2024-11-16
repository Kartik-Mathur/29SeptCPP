#include <iostream>
using namespace std;

int main() {
	/*
	int a = 1;
	int *ap = &a;
	*/
	int a = 1;
	int *ap;
	ap = &a;

	char ch = 'A';
	char *chp = &ch;

	float f = 1.11;
	float *fp = &f;

	cout << "sizeof(&f)   : " << sizeof(&f) << endl;
	cout << "sizeof(fp)   : " << sizeof(fp) << endl;
	cout << "sizeof(&a)   : " << sizeof(&a) << endl;
	cout << "sizeof(&ch)  : " << sizeof(&ch) << endl;
	cout << "&a   : " << &a << endl;
	cout << "ap   : " << ap << endl;
	cout << "*ap  : " << *ap << endl;
	cout << "*(&a): " << *(&a) << endl;
	cout << "ap+1 : " << ap + 1 << endl;


	return 0;
}
















