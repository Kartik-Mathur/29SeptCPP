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

	void BFS(T src) {
		unordered_map<T, bool> visited;

		queue<T> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T x = q.front();
			q.pop();
			cout << x << " ";
			for (auto ch : adj[x]) {
				if (visited.count(ch) == 0) {
					visited[ch] = true;
					q.push(ch);
				}
			}
		}

		cout << endl;
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
	g.BFS(0);

	return 0;
}
















