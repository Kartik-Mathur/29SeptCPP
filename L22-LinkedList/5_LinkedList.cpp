#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next; // self-referential class
};

int main() {

	node a;

	a.data = 1;
	a.next = NULL;

	node b;
	b.data = 2;
	a.next = &b;

	cout << a.data << endl;
	cout << (*a.next).data << endl;
	cout << (a.next)->data << endl;




	return 0;
}
















