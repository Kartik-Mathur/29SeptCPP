#include <iostream>
using namespace std;

bool isSafe(int board[][100], int i, int j
            , int n) {
	for (int k = 0; k < i; ++k)
	{
		if (board[k][j]) return false;
	}

	int copy_i = i, copy_j = j;

	while (i >= 0 and j >= 0) {
		if (board[i--][j--]) return false;
	}

	i = copy_i;
	j = copy_j;
	while (i >= 0 and j < n) {
		if (board[i--][j++]) return false;
	}

	return true;
}

bool nQueen(int board[][100], int i, int n) {
	// base case
	if (i == n) {
		// print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				board[i][j] == 1 ? cout << "Q " : cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;

		return false;
	}

	// Recursive case
	for (int j = 0; j < n; ++j)
	{
		if (isSafe(board, i, j, n)) {
			board[i][j] = 1; // Place the queen agar safe hai rakhna
			bool kyaBaakiBaatBani = nQueen(board, i + 1, n);
			if (kyaBaakiBaatBani) return true;

			board[i][j] = 0; // backtrack
		}
	}

	return false;
}



int main() {

	int board[100][100] = {0};

	int n; cin >> n;
	nQueen(board, 0, n);


	return 0;
}
















