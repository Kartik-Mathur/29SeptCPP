#include <iostream>
using namespace std;

void solve(char* in, int i, char *op, int j) {
	// base case
	if (in[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	// 1. Ignore ith char
	solve(in, i + 1, op, j);
	// 2. Consider ith character in output array
	op[j] = in[i];
	solve(in, i + 1, op, j + 1);
}

int main() {

	char ip[] = "abc";
	char op[100];
	solve(ip, 0, op, 0);

	return 0;
}
















