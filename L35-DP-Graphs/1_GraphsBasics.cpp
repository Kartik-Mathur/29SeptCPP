#include <iostream>
#include <list> // STL for linkedlist
using namespace std;

int main() {

	list<int> l; // doubly linked list

	// Insertion at front
	l.push_front(1);
	l.push_front(2);
	l.push_front(3);

	// Insertion at end
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);

	// Insertion at mid
	int pos = 3;
	list<int>::iterator it = l.begin();
	for (int i = 0; i < pos - 1; ++i)
	{
		it++;
	}
	l.insert(it, 7);

	// l.sort(); // sorting

	// l.reverse(); // reverse

	// deletion
	int key = 7;
	for (it = l.begin() ; it != l.end() ; it++) {
		if (*it == key) break;
	}
	l.erase(it);

	// 3 2 1 4 5 6
	// for-each loop
	// for every data d that belongs to linkedlist l
	for (int d : l) {
		cout << d << " ";
	}
	cout << "\n";

	// Iterators
	// list<int>::iterator it;
	for (auto it = l.begin(); it != l.end() ; it++) {
		cout << *it << " ";
	}
	cout << endl;

	auto i = 10;
	cout << i << endl;

	auto j = 1.11;
	cout << j << endl;
	cout << sizeof(j) << endl;


	return 0;
}
















