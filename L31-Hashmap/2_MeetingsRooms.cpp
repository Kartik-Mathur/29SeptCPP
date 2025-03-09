class Solution {
public:
	static bool comparator(vector<int> &x, vector<int> &y) {
		if (x[0] == y[0])
			return x[1] < y[1];
		return x[0] < y[0];
	}

	int minMeetingRooms(vector<vector<int>>& a) {
		priority_queue<int, vector<int>, greater<int> > q; // Minheap

		sort(a.begin(), a.end(), comparator);

		for (int i = 0; i < a.size(); ++i)
		{
			if (q.empty()) {
				int current_startTime = a[i][0];
				int current_endTime = a[i][1];

				q.push(current_endTime);
			}
			else {
				int current_startTime = a[i][0];
				int current_endTime = a[i][1];

				if (current_startTime >= q.top()) q.pop();

				q.push(current_endTime);
			}
		}
		return q.size();
	}
};