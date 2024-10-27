#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;

	// cin >> ch;// whitespace are ignored
	ch = cin.get(); // don't ignore whitespace
	while (ch != '$') {

		cnt++;

		// cin >> ch;// whitespace are ignored
		ch = cin.get();// don't ignore whitespace
	}

	cout << "Count: " << cnt << endl;

	return 0;
}
















