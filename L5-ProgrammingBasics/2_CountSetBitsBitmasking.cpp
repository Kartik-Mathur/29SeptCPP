#include <iostream>
using namespace std;

int main() {
	int n, rem;
	cin >> n;

	int cnt = 0;

	while (n != 0) {
		int val = (n & 1);
		cnt += val;
		n = n >> 1;
	}

	cout << "Set Bits: " << cnt << endl;
	return 0;
}
















