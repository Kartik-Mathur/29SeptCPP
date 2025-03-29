#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, int> h;

	h["Mango"] = 100;

	pair<string, int> p;
	p.first = "Apple";
	p.second = 150;
	h.insert(p);

	h.insert(make_pair("Kiwi", 50));

	h.insert({"Guava", 70});
	h.insert({"Orange", 180});
	h.insert({"Pineapple", 170});

	// for (auto p : h) {
	for (pair<string, int> p : h) {
		cout << p.first << " : " << p.second << endl;
	}

	// Printing the entire hashtable
	for (int i = 0 ; i < h.bucket_count(); i++) {
		cout << i << " -> ";
		for (auto it = h.begin(i); it != h.end(i) ; it++) {
			cout << "(" << (*it).first << ", " << (*it).second << ") ";
		}
		cout << endl;
	}

	return 0;
}
















