#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	cin >> n;

	v.reserve(n); // capacity n kar dega but size will be 0
	cout << "size: " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;
	for (int i = 0; i < n; ++i)
	{
		// v[i] = i + 1;
		v.push_back(i);
	}

	v.push_back(100);
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	cout << "size: " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;





	return 0;
}
















