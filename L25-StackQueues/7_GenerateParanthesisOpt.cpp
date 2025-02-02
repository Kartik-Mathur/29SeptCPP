#include <iostream>
using namespace std;

void solve(int open, int close, int n, string &s) {
	// base case
	if (s.size() == 2 * n) {
		cout << s << endl;
		return;
	}
	// recursive case
	if (open < n) { // Add '('
		s.push_back('(');
		solve(open + 1, close, n, s);
		s.pop_back(); // backtracking
	}

	if (open > close) {
		s.push_back(')');
		solve(open, close + 1, n, s);
		s.pop_back(); // backtracking
	}
}

int main() {
	string s = "";
	solve(0, 0, 3, s);

	return 0;
}
















