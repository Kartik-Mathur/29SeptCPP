#include <iostream>
using namespace std;

void permutations(char *a, int i) {
	// base case
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}

	// recursive case
	for (int j = i; a[j] != '\0'; ++j)
	{
		swap(a[i], a[j]);
		permutations(a, i + 1);
		swap(a[i], a[j]);// Backtracking
	}
}

void permutationswb(string ip, string op) {
	// base case
	if (ip.size() == 0) {
		cout << op << endl;
		return;
	}

	// recursive case
	for (int i = 0; i < ip.size(); ++i)
	{
		// cout << ip[i] << " isse op mei daalo, recursion: ";
		permutationswb(ip.substr(0, i) + ip.substr(i + 1), op + ip[i]);
	}
}

void permutationswb1(string ip, string &op) {
	// base case
	if (ip.size() == 0) {
		cout << op << endl;
		return;
	}

	// recursive case
	for (int i = 0; i < ip.size(); ++i)
	{
		// cout << ip[i] << " isse op mei daalo, recursion: ";
		op.push_back(ip[i]);
		permutationswb1(ip.substr(0, i) + ip.substr(i + 1), op);
		op.pop_back(); // backtracking
	}
}

int main() {

	char a[] = "abc";

	// permutations(a, 0);
	string op = "";
	permutationswb1("abc", op);

	return 0;
}
















