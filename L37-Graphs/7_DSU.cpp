#include <iostream>
using namespace std;

class DSU {
public:
	int *parent;
	int n;

	DSU(int N) {
		n = N + 1;
		parent = new int[N + 1];
		for (int i = 0; i < n; ++i) create_set(i);
	}

	int union_set(int u, int v) {
		int leader_u = get_set(u);
		int leader_v = get_set(v);
		if (leader_u != leader_v) {
			parent[leader_v] = leader_u;
		}
	}

	int get_set(int u) { // yeh leader dega
		if (parent[u] == u)  return u;

		return get_set(parent[u]);

	}
	int create_set(int i) {
		parent[i] = i;
	}
};

int main() {




	return 0;
}
















