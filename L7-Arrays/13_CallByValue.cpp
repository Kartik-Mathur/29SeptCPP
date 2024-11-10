#include <iostream>
using namespace std;

// Call by value
void update(int x) {
	x = x + 1;
}

// Call by reference
void update(int &x) {
	x = x + 1;
}

int main() {

	int a = 1;

	cout << a << endl;
	update(a);
	cout << a << endl;


	return 0;
}
















