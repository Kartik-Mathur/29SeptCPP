#include <iostream>
using namespace std;

void printDecreasing(int n) {

	// base case
	if (n == 0) {
		return ;
	}

	// recursive case
	printDecreasing(n - 1);
	cout << n << " ";
}



int main() {

	printDecreasing(5);


	return 0;
}
















