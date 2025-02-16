#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data =  d;
		left = right = NULL;
	}
};

node* buildTree() {
	int d;
	cin >> d;
	if (d == -1) {
		return NULL;
	}

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void preOrder(node* root) {
	if (!root) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}


void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	if (!root) return {0, 0};

	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair ans;
	ans.height = max(left.height, right.height) + 1;

	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	ans.diameter = max(op1, max(op2, op3));
	return ans;
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root = buildTree();
	Pair ans = fastDiameter(root);
	cout << ans.height << endl;
	cout << ans.diameter << endl;

	return 0;
}
















