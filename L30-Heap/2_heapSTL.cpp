#include <iostream>
#include <queue>
#include <functional> // greater<int>
using namespace std;

class mycomparator {
public:
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {

	// priority_queue<int> h; // Maxheap
	// priority_queue<int, vector<int>, greater<int> > h; // Minheap
	// priority_queue<int, vector<int>, less<int> > h; // Maxheap
	priority_queue<int, vector<int>, mycomparator > h;

	h.push(2);
	h.push(1);
	h.push(3);
	h.push(5);
	h.push(4);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

	cout << endl;;



	return 0;
}






