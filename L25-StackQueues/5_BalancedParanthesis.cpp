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

int main() {

	string s = "[ a + b*(c+d) + {e + f }]";

	if (isBalanced(s)) cout << "Balanced\n";
	else cout << "Not Balanced\n";



	return 0;
}
















