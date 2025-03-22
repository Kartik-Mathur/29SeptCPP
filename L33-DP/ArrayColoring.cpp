#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		vector<pair<int, int>> sorted_a;
		for (int i = 0; i < n; i++) {
			sorted_a.push_back({a[i], i});
		}

		sort(sorted_a.begin(), sorted_a.end(), greater<pair<int, int>>());

		ll max_cost = 0;

		for (int last = 0; last < n; last++) {
			vector<bool> is_blue(n, false);
			ll initial_cost = 0;
			int count = 0;

			for (auto &[val, idx] : sorted_a) {
				if (count >= k) break;
				if (idx != last) {
					is_blue[idx] = true;
					initial_cost += val;
					count++;
				}
			}

			if (count < k) continue;

			vector<bool> visited = is_blue;
			queue<int> q;

			for (int i = 0; i < n; i++) {
				if (is_blue[i]) {
					q.push(i);
				}
			}

			while (!q.empty()) {
				int cur = q.front();
				q.pop();

				if (cur > 0 && !visited[cur - 1]) {
					visited[cur - 1] = true;
					q.push(cur - 1);
				}
				if (cur < n - 1 && !visited[cur + 1]) {
					visited[cur + 1] = true;
					q.push(cur + 1);
				}
			}

			bool can_color_all = true;
			for (int i = 0; i < n; i++) {
				if (!visited[i]) {
					can_color_all = false;
					break;
				}
			}

			if (can_color_all) {
				ll total_cost = initial_cost + a[last];
				max_cost = max(max_cost, total_cost);
			}
		}

		cout << max_cost << endl;
	}

	return 0;
}