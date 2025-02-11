class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		int n = heights.size();
		vector<int> ns(n), ps(n);

		stack<int> s;
		ps[0] = -1;
		s.push(0);
		for (int i = 1; i < n; ++i)
		{
			while (!s.empty() and heights[i] <= heights[s.top()]) s.pop();

			if (s.empty()) ps[i] = -1;
			else ps[i] = s.top();

			s.push(i);
		}

		while (!s.empty()) {
			s.pop();
		}

		ns[n - 1] = n;
		s.push(n - 1);
		for (int i = n - 2; i >= 0; --i)
		{
			while (!s.empty() and heights[i] <= heights[s.top()]) s.pop();

			if (s.empty()) ns[i] = n;
			else ns[i] = s.top();

			s.push(i);
		}


		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int l = ns[i] - ps[i] - 1;
			int smallAns = l * heights[i];

			ans = max(ans, smallAns);
		}

		return ans;
	}
};






