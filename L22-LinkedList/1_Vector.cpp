#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i);
		cout << "Inserted " << i << ", ";
		cout << "Capacity: " << v.capacity() << ", " << "Size: " << v.size() << endl;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// cout << "Capacity: " << v.capacity() << ", " << "Size: " << v.size() << endl;


	return 0;
}
















