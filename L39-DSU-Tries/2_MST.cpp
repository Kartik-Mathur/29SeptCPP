#include <iostream>
#include <set>
#include <queue>
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

class graph {
public:
	int wt;
	char u, v;
};

class myClass {
public:
	bool operator()(graph a, graph b) {
		return a.wt > b.wt;
	}
};

int main() {


	priority_queue<graph, vector<graph>, myClass > q;
	// q.push({1, 1, 2});
	q.push({1, 'A', 'B'});
	q.push({2, 'A', 'C'});
	q.push({3, 'B', 'D'});
	q.push({1, 'C', 'D'});
	q.push({2, 'D', 'E'});
	q.push({8, 'C', 'F'});
	q.push({4, 'D', 'F'});

	DSU d(6);
	int ans = 0;
	while (!q.empty()) {
		auto e = q.top();

		int wt = e.wt, u = e.u - 'A' + 1, v = e.v - 'A' + 1;

		int leader_u = d.get_set(u);
		int leader_v = d.get_set(v);

		if (leader_u != leader_v) {
			ans += wt;
			d.union_set(leader_u, leader_v);
		}

		q.pop();
	}

	cout << ans << endl;



	return 0;
}
















