class Solution {
public:
	static bool comparator(vector<int> &x, vector<int> &y) {
		return x[1] < y[1];
	}

	int eraseOverlapIntervals(vector<vector<int>>& a) {
		sort(a.begin(), a.end(), comparator);

		int pe, cs, ce, cnt = 0;
		pe = a[0][1];

		for (int i = 0; i < a.size(); ++i)
		{
			cout << "(" << a[i][0] << ", " << a[i][1] << ") ";
		}

		for (int i = 1; i < a.size(); ++i)
		{
			cs = a[i][0];
			ce = a[i][1];

			if (pe > cs) cnt++;
			else {
				pe = ce;
			}
		}

		return cnt;
	}
};