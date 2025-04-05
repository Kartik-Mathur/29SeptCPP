#include <iostream>
using namespace std;

class DSU {
public:
	int *parent, *size;
	int n;

	DSU(int N) {
		n = N + 1;
		parent = new int[N + 1];
		size = new int[N + 1];
		for (int i = 0; i < n; ++i) {
			create_set(i);
			size[i] = 1;
		}
	}

	void union_set(int u, int v) {
		int leader_u = get_set(u);
		int leader_v = get_set(v);
		if (leader_u != leader_v) {
			if (size[leader_v] > size[leader_u]) swap(leader_u, leader_v);

			// We will assume that u always have bigger size
			parent[leader_v] = leader_u;
			size[leader_u] += size[leader_v];
		}
	}

	int get_set(int u) { // yeh leader dega
		if (parent[u] == u)  return u;

		return parent[u] = get_set(parent[u]);

	}

	void create_set(int i) {
		parent[i] = i;
	}
};

int main() {

	DSU d(4);

	int edges;
	cin >> edges;

	for (int i = 0; i < edges; ++i)
	{
		int u, v;
		cin >> u >> v;

		int leader_u = d.get_set(u);
		int leader_v = d.get_set(v);

		if (leader_u == leader_v) {
			cout << "Cycle present\n";
			break;
		}

		d.union_set(leader_u, leader_v);
	}



	return 0;
}
















