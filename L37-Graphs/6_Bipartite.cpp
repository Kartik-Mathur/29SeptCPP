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

	bool bipartiteHelper(T src, T parent, unordered_map<T, int> &color, int c = 1) {
		color[src] = c;

		for (auto ch : adj[src]) {
			if (color.count(ch) == 0) {
				bool kyaChotaGraphBiPartiteHai = bipartiteHelper(ch, src, color, 3 - c);
				if (!kyaChotaGraphBiPartiteHai) return false;
			}
			else if (ch != parent and color[ch] == c) {
				return false;
			}
		}

		return true;
	}

	bool isBipartite() {
		unordered_map<T, int> color;
		for (auto p : adj) {
			if (color.count(p.first) == 0) {
				bool ans = bipartiteHelper(p.first, p.first, color);
				if (!ans) return false;
			}
		}

		return true;
	}

};

int main() {

	Graph<int> g;

	g.addEdge(1, 2);
	g.addEdge(4, 2);
	g.addEdge(4, 5);
	// g.addEdge(6, 5);
	g.addEdge(1, 3);
	g.addEdge(5, 3);
	// g.addEdge(6, 3);


	if (g.isBipartite()) cout << "Biparitite\n";
	else cout << "Not Biparitite\n";




	return 0;
}
















