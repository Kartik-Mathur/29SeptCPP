#include <iostream>
#include <map>
using namespace std;

int main() {
	// Timecomplexity: O(logN)
	map<string, int> h;

	h["Mango"] = 100;

	pair<string, int> p;
	p.first = "Apple";
	p.second = 150;
	h.insert(p);

	h.insert(make_pair("Kiwi", 50));

	h.insert({"Guava", 70});
	h.insert({"Orange", 180});
	h.insert({"Pineapple", 170});

	for (pair<string, int> p : h) {
		cout << p.first << " : " << p.second << endl;
	}


	return 0;
}
















