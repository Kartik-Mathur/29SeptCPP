#include <iostream>
#include <set>
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

	void dijkstras(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;
		// Set the distance of every node initially as INT_MAX
		for (auto p : adj) {
			distance[p.first] = INT_MAX;
		}

		parent[src] = src;
		distance[src] = 0;
		set<pair<int, T> > s;
		s.insert({0, src});

		while (!s.empty()) {
			auto p = *s.begin();
			s.erase(s.begin());

			T x = p.second;
			int cd = p.first;
			for (auto chp : adj[x]) {
				T ch = chp.first;
				int edgeD = chp.second;

				if (distance[ch] > cd + edgeD) {
					auto f = s.find({distance[ch], ch});
					if (f != s.end()) {
						s.erase(f);
					}

					s.insert({cd + edgeD, ch});
					distance[ch] = cd + edgeD;
					parent[ch] = x;
				}
			}
		}

		for (auto p : distance) {
			cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		}

		while (des != parent[des]) {
			cout << des << " <-- ";
			des = parent[des];
		}
		cout << des << "\n";
	}
};

int main() {

	Graph<char> g;

	g.addEdge('A', 'B', 1);
	g.addEdge('C', 'B', 2);
	g.addEdge('C', 'D', 3);
	g.addEdge('A', 'D', 8);
	g.addEdge('A', 'C', 5);

	g.dijkstras('A', 'D');

	return 0;
}
















