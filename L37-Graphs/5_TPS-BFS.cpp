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


	void tps() {
		unordered_map<T, int> indegree;

		for (auto p : adj) {
			for (auto ch : p.second) {
				if (indegree.count(ch) == 0) indegree[ch] = 1;
				else indegree[ch]++;
			}
		}

		queue<T> q;
		for (auto p : adj) {
			if (!indegree[p.first]) q.push(p.first);
		}

		while (!q.empty()) {
			auto f = q.front();
			q.pop();
			cout <<  f << " ";
			for (auto ch : adj[f]) {
				if (indegree[ch]) {
					indegree[ch]--;
					if (indegree[ch] == 0) q.push(ch);
				}
			}
		}
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
















