#include <iostream>
using namespace std;

class Vector {
	int *a;
	int n;
	int cs;
public:

	Vector(int s = 1) {
		a = new int[s];
		n = s;
		cs = 0;
	}

	void push_back(int d) {
		if (cs == n) {
			int *olda = a;
			int oldN = n;
			a = new int[2 * n];
			n = 2 * n;
			for (int i = 0; i < oldN; ++i)
				a[i] = olda[i];
			delete []olda;
		}

		a[cs++] = d;
	}

	void pop_back() {
		if (cs > 0)cs--;
	}

	int size() {
		return cs;
	}

	bool empty() {
		return cs == 0;
	}

	int capacity() {
		return n;
	}

	int operator[](int i) {
		return a[i];
	}
};

int main() {

	Vector v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i);
		cout << "Inserted " << i << ", ";
		cout << "Capacity: " << v.capacity() << ", " << "Size: " << v.size() << endl;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















