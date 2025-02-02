#include <iostream>
using namespace std;

class Queue {
	int *a;
	int f, r, n, cs;
public:

	Queue(int s = 5) {
		a = new int[s];
		n = s;
		f = 0;
		r = n - 1;
		cs = 0;
	}

	void push(int d) {
		if (cs >= n) {
			cout << "Queue Overflow\n";
			return;
		}

		r = (r + 1) % n;
		a[r] = d;
		cs++;
	}

	void pop() {
		if (cs <= 0) {
			cout << "Queue Underflow\n";
			return;
		}
		f = (f + 1) % n;
		cs--;
	}

	int front() {
		return a[f];
	}

	bool empty() {
		return cs == 0;
	}

};

int main() {

	Queue q;

	for (int i = 1; i <= 5; ++i)
	{
		q.push(i);
	}
	// q.push(6);
	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;


	return 0;
}
















