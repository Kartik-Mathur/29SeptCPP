#include <iostream>
using namespace std;

string keys[] = {
	"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void intToString(int n) {
	// base case
	if (!n) return;

	// recursive case
	// n = 2048;
	int last_digit = n % 10; // digit -> 8
	intToString(n / 10); // 204 ka kaam recursion ko bol diya
	cout << keys[last_digit] << " "; // Print "eight"
}

int main() {

	intToString(2048);

	return 0;
}
















