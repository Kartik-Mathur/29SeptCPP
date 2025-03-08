#include <iostream>
#include <queue>
#include <functional> // greater<int>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

	cout << endl;
}

int main() {

	priority_queue<int, vector<int>, greater<int> > h; // Minheap
	int cs = 0, k = 3;
	while (1) {
		int n; cin >> n;

		if (n == -1) {
			printHeap(h);
			continue;
		}


		if (cs < k) {
			h.push(n);
			cs++;
		}
		else {
			if (n > h.top()) { // naya number n bada hai minimum element se toh
				h.pop(); // minimum ko hatao
				h.push(n); // new element ko daalo
			}
		}

	}


	return 0;
}
















