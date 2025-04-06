#include <iostream>
#include <vector>
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

	int maxXorwithNumber(int no) {
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

		return t->no;
	}

	vector<int> maxXorPair(int *a, int n) {
		int ans = 0;
		int num1, num2;
		for (int i = 0; i < n; ++i)
		{
			insertNumber(a[i]);
			int x = maxXorwithNumber(a[i]);
			if ( (x ^ a[i]) > ans) {
				ans = x ^ a[i];
				num1 = a[i];
				num2 = x;
			}
		}

		vector<int> v = {num1, num2, ans};
		return v;
	}
};

int main() {

	int a[] = {1, 3, 4, 6};
	int n = sizeof(a) / sizeof(int);

	Trie t;
	vector<int> v = t.maxXorPair(a, n);
	cout << "Max xor numbers : " << v[0] << ", " << v[1] << endl;
	cout << "MAX XOR : " << v[2] << endl;

	return 0;
}
















