#include <iostream>
using namespace std;

void toh(int n, char src, char helper, char destination) {
	// base case
	if (!n) return;

	// recursive case
	// 1. Take n-1 disks from src to helper
	toh(n - 1 , src  , destination  , helper  );
	// 2. Print nth disk ko src se des le gaye
	cout << "Take " << n << " from " << src << " to " << destination << endl;
	// 3. Take n-1 disks from helper to des
	toh(n - 1, helper, src, destination);
}



int main() {

	int n = 3;

	toh(n, 'A', 'B', 'C');


	return 0;
}
















