#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Way-1
	int n;
	cin >> n;

	vector<int> v(n, 100); // Yeh n capacity ka array create kar dega, size will also be n
	cout << "Size: " << v.size() << "Capacity: " << v.capacity() << endl;
	v.push_back(10);
	cout << "Size: " << v.size() << "Capacity: " << v.capacity() << endl;

	// for (int i = 0; i < n; ++i)
	// {
	// 	v[i] = i + 1;
	// }


	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;



	return 0;
}
















