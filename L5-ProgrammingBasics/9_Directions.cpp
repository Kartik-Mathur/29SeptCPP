#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0;
	char ch;
	ch = cin.get();

	while (ch != '\n') {

		if (ch == 'N') y++;
		else if (ch == 'S')y--;
		else if (ch == 'E')x++;
		else if (ch == 'W')x--;

		ch = cin.get();
	}

	// Print E
	if (x >= 0) {
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}
	// Print N
	if (y >= 0) {
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	// Print S
	if (y <= 0) {
		y = -1 * y;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}
	// Print W
	if (x <= 0) {
		x = -1 * x;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}

	cout << endl;

	return 0;
}
















