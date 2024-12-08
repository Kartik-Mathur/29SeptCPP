#include <iostream>
using namespace std;

int main() {

	// Alternative for character arrays
	string s;
	s = "Hello";
	cout << s << endl;

	string  s1 = "World";
	// s = s + " " + s1;
	s += " " + s1;
	cout << s << endl;

	for (int i = 0; i < s1.size(); ++i)
	{
		cout << s[i] << "-";
	}
	cout << endl;

	// Functions present in string
	cout << "s: " << s << endl;
	s.push_back('s');
	cout << "s: " << s << endl;
	s.pop_back();
	cout << "s: " << s << endl;

	/*
	char a[100];
	a = "Hello"; // Won't work
	strcpy(a,"Hello"); // This works

	char b[100] = "World";

	b = a + b; // Won't work
	strcat(b,a); // This works
	*/

	return 0;
}
















