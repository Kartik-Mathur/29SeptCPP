#include <iostream>
#include <unordered_map>
#include <queue>
#include <list>
#include <map>
using namespace std;

template<typename T>
class Graph {
public:
	map<T, list<pair<T, int> > >  adj;
	void addEdge(T u, T v, int d, bool bidir = true) {
		adj[u].push_back({v, d});
		if (bidir) adj[v].push_back({u, d});
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto p1 : p.second) {
				cout << "(" << p1.first << ", " << p1.second << ") ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph<char> g;

	g.addEdge('A', 'B', 1);
	g.addEdge('C', 'B', 2);
	g.addEdge('C', 'D', 3);
	g.addEdge('A', 'D', 4);
	g.addEdge('A', 'C', 5);

	g.print();

	return 0;
}
















