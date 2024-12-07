#include <iostream>
using namespace std;

int main() {

	int x;
	char a[100];

	cin >> x;
	cin.ignore(); // or cin.get(); // Ek character read kr lega integer ke baad ka aur usse
	// kahi store mat karo, therefore ignore ho jaega
	cin.getline(a, 100);

	cout << "Number:" << x << endl;
	cout << "String:" << a << endl;


	return 0;
}
















