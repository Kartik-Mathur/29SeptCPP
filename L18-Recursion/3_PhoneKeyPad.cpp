#include <iostream>
using namespace std;

char keys[][5] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void phoneKeypad(char *ip, int i, char *op, int j) {
	// base case
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	int d = ip[i] - '0';
	for (int k = 0; keys[d][k] != '\0' ; ++k)
	{
		op[j] = keys[d][k];
		phoneKeypad(ip, i + 1, op, j + 1);
	}
}

int main() {

	char ip[100], op[100];
	cin >> ip;

	phoneKeypad(ip, 0, op, 0);

	// int d = 2;

	// // cout << keys[d] << endl;
	// for (int k = 0; keys[d][k] != '\0' ; ++k)
	// {
	// 	cout << keys[d][k] << endl;
	// }
	// cout << endl;


	return 0;
}
















