#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string &a) {
	stack<char> s;

	for (int i = 0; i < a.size(); ++i)
	{
		char ch = a[i];
		switch (ch) {
		case '(':
		case '[':
		case '{': s.push(ch);
			break;
		case ')':
			if (!s.empty() and s.top() == '(') s.pop();
			else return false;
			break;
		case '}':
			if (!s.empty() and s.top() == '{') s.pop();
			else return false;
			break;
		case ']':
			if (!s.empty() and s.top() == '[') s.pop();
			else return false;
		}
	}

	return s.empty();
}


void solve(string s, int i, int n) {
	// base case
	if (i == 2 * n) {
		if (isBalanced(s))
			cout << s << endl;
		return;
	}

	// recursive case
	solve(s + "(", i + 1, n);
	solve(s + ")", i + 1, n);
}

int main() {

	solve("", 0, 3);


	return 0;
}
















