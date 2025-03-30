#include <iostream>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = false) {
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

	void tps_helper(T src, unordered_map<T, bool> &visited, list<T> &ans) {

		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				tps_helper(ch, visited, ans);
			}
		}
		visited[src] = true;
		ans.push_front(src);
	}

	void tps() {
		unordered_map<T, bool> visited;
		list<T> ans;
		for (auto p : adj) {
			if (!visited[p.first]) {
				tps_helper(p.first, visited, ans);
			}
		}

		for (auto el : ans) {
			cout << el << " ";
		}
		cout << endl;
	}
};

int main() {

	Graph<string> g;

	g.addEdge("Hindi", "Sanskrit");
	g.addEdge("Hindi", "Maths");
	g.addEdge("English", "Maths");
	g.addEdge("Maths", "CPP");
	g.addEdge("Sanskrit", "CPP");
	g.addEdge("CPP", "Java");
	g.addEdge("CPP", "Dev");
	g.addEdge("English", "Python");
	g.addEdge("Python", "Dev");

	g.tps();


	return 0;
}
















