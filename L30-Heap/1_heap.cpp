#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	vector<int> v;
	void heapify(int i) {
		int mi = i, left = 2 * i, right = left + 1;

		if (left<v.size() and v[mi]>v[left]) mi = left;
		if (right<v.size() and v[mi]>v[right]) mi = right;

		// Base case
		if (i != mi) {
			swap(v[i], v[mi]);
			heapify(mi);
		}
	}
public:
	Minheap() {
		v.push_back(-1); // 0th index ko hume consider nhi krna
	}

	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;

		while (p >= 1 and v[p] > v[c]) {
			swap(v[p], v[c]);
			p /= 2;
			c /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();

		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;
	h.push(2);
	h.push(1);
	h.push(3);
	h.push(5);
	h.push(4);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

	cout << endl;

	return 0;
}
















