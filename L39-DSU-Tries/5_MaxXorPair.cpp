#include <iostream>
using namespace std;

class node {
public:
	int no;
	node* left, *right;
	node() {
		left = right = NULL;
	}
};

class Trie {
public:
	node* root;

	Trie() {
		root = new node();
	}

	void insertNumber(int no) {
		node* t = root;
		for (int i = 30; i >= 0 ; i--) {
			if (no & (1 << i)) {
				if (!t->right)
					t->right = new node();
				t = t->right;
			}
			else {
				if (t->left == NULL)
					t->left = new node();
				t = t->left;
			}
		}

		t->no = no;
	}

	int maxXor(int no) {
		node* t = root;
		for (int i = 30; i >= 0 ; i--) {
			if (no & (1 << i)) {
				if (t->left) t = t->left;
				else t = t->right;
			}
			else {
				if (t->right) t = t->right;
				else t = t->left;
			}
		}

		return no ^ t->no;
	}

	int maxXorPair(int *a, int n) {
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			insertNumber(a[i]);
			ans = max(ans, maxXor(a[i]));
		}

		return ans;
	}
};

int main() {

	int a[] = {1, 3, 4, 6};
	int n = sizeof(a) / sizeof(int);

	Trie t;
	cout << t.maxXorPair(a, n) << endl;

	return 0;
}
















