#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int i, int j, int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// Print the solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				sol[i][j] ? cout << "1 " : cout << "0 ";
			}
			cout << endl;
		}

		cout << endl;
		return false;
	}
	// recursive case
	// Assume i,j could be a solution
	sol[i][j] = 1;
	// 1. Try going right
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaBaatbani = ratInMaze(maze, i, j + 1, n, m, sol);
		if (kyaBaatbani) return true;
	}

	// 2. Try going down
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaBaatbani = ratInMaze(maze, i + 1, j, n, m, sol);
		if (kyaBaatbani) return true;
	}
	// Dono se raasta nahi milla toh maze not solvable
	sol[i][j] = 0;
	return false;
}


int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10] = {0};

	ratInMaze(maze, 0, 0, 4, 4, sol);

	return 0;
}
















