#include <iostream>
using namespace std;

bool ratInMaze(char maze[][6], int i, int j, int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// Print the solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;
		sol[i][j] = 0; // backtracking
		return false;
	}
	// recursive case
	// Assume i,j could be a solution
	sol[i][j] = 1;
	// 1. Try going right
	if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1) {
		bool kyaBaatbani = ratInMaze(maze, i, j + 1, n, m, sol);
		if (kyaBaatbani) return true;
	}

	// 2. Try going down
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool kyaBaatbani = ratInMaze(maze, i + 1, j, n, m, sol);
		if (kyaBaatbani) return true;
	}

	// 3. Try going back
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool kyaBaatbani = ratInMaze(maze, i, j - 1, n, m, sol);
		if (kyaBaatbani) return true;
	}
	// 4. Try going up
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool kyaBaatbani = ratInMaze(maze, i - 1, j, n, m, sol);
		if (kyaBaatbani) return true;
	}

	// Dono se raasta nahi milla toh maze not solvable
	sol[i][j] = 0;
	return false;
}


int main() {

	char maze[][6] = {
		"0X000",
		"0X0X0",
		"0X0X0",
		"000X0"
	};
	int sol[10][10] = {0};

	ratInMaze(maze, 0, 0, 4, 5, sol);

	return 0;
}
















