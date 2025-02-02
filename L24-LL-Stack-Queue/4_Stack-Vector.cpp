#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
	vector<int> v; // So that vector cannot be accessed outside class
public:
	void push(int d) {
		v.push_back(d); // [1,2,3,4], 4 is inserted at last
	}

	void pop() {
		// last wala element hata do
		v.pop_back();
	}

	bool empty() {
		return v.size() == 0;
	}

	int top() {
		return v[v.size() - 1]; // last wala element at vector hi last mei insert hua hai,
		// wahi sabse pehle dekh sakte hai
	}
};

int main() {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}




	return 0;
}
















