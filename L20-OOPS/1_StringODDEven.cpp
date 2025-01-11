#include <iostream>
using namespace std;

int main() {

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		if (i % 2 == 0) {
			int x = s[i];
			x++;
			s[i] = x;
		}
		else {
			int x = s[i];
			x--;
			s[i] = x;
		}
	}
	cout << s << endl;

	return 0;
}
















