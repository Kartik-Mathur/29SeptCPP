#include <iostream>
using namespace std;

void print_sum(int x, int y) {
	cout << "Sum: " << x + y << endl;
}

int add(int x, int y) {
	int ans = x + y;
	return ans;
}

int main() {

	int a = 10, b = 20;

	cout << "Sum of " << a << ", " << b << " : " << add(a, b) << endl;
	/*
		int sum = add(a, b);

		cout << "Sum of " << a << ", " << b << " : " << sum << endl;
	*/
	print_sum(a, b);
	print_sum(20, 20);


	return 0;
}
















