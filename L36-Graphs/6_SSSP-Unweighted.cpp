#include <iostream>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto ch : p.second) {
				cout << ch << ", ";
			}
			cout << endl;
		}
	}

	void SSSP(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;

		queue<T> q;
		q.push(src);
		parent[src] = src;
		dist[src] = 0;

		while (!q.empty()) {
			T x = q.front();
			q.pop();
			for (auto ch : adj[x]) {
				if (dist.count(ch) == 0) {
					dist[ch] = dist[x] + 1;
					parent[ch] = x;
					q.push(ch);
				}
			}
		}

		// Print the entire distance map, it contains min distance of all nodes
		// from src node
		for (auto p : dist) {
			cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		}


		while (des != parent[des]) {
			cout << des << " <- ";
			des = parent[des];
		}
		cout << des << endl;
	}
};

int main() {

	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 4);
	g.addEdge(3, 4);
	g.addEdge(3, 5);
	g.addEdge(2, 3);

	// g.print();
	g.SSSP(0, 5);

	return 0;
}
















