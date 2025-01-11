#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *a) {
	int i = 0, j = strlen(a) - 1;

	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}
		i++;
		j--;
	}

	return true;
}

int main() {

	char a[10000];
	cin >> a;

	bool ans = isPalindrome(a);

	if (ans == true) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}

	return 0;
}
















