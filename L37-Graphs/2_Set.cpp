#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;
	s.insert(4);
	s.insert(2);
	s.insert(3);
	s.insert(1);

	// Duplicacy is not allowed inside set.... and data is sorted
	for (auto el : s) cout << el << " ";

	// Finding element in set
	// set<int>::iterator x = s.find(31);
	auto x = s.find(31);
	if (x != s.end()) {
		cout << "\nFound " << *x << endl;
		s.erase(x); // deleting the node found
	}
	else cout << "\nNot found\n";

	for (auto el : s) {
		cout << el << " ";
	}

	// Updation in set: Not possible to update an element in set
	// 1. Find the element and delete it
	// 2. Insert the updated element



	return 0;
}










