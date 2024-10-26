#include <iostream>
using namespace std;

int main() {

	int init, fval, step, cel;
	cin >> init >> fval >> step;

	int far = init; // initialisation

	while (far <= fval) { // condition check

		// far ke liye cel nikalna padega
		cel = (5 / 9.0) * (far - 32);
		cout << far << " " << cel << endl;

		far = far + step; // updation
	}

	return 0;
}
















