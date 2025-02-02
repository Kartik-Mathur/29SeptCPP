#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s, int topE) {
	if (s.empty()) {
		// jab stack khali hoga tabhi topE ko insert krna hai
		s.push(topE);
		return;
	}

	// topE ko last mei insert krna hai toh stack ke element ko hum hatate hai
	// baaki ka kaam recursion ko bolte hai khaali krde stack
	int top = s.top();
	s.pop();
	push_bottom(s, topE); // Recursion ko bolkar stack khali kia

	// Jab recursion vapis aaega topE ko insert krke, toh jo element humne hataya hai usse
	// vapis daal do
	s.push(top);
}

void reverseStack(stack<int> &s) {
	// if stack is empty vapis jaao, no need to reverse (BASE CASE)
	if (s.empty()) return;

	int topE = s.top();
	s.pop();
	reverseStack(s);
	push_bottom(s, topE);
}

int main() {


	stack<int> s;
	for (int i = 1; i <= 4; ++i)
	{
		s.push(i);
	}

	reverseStack(s);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

	return 0;
}
















