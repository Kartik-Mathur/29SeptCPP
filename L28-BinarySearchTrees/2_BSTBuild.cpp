#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	if (!root) {
		root = new node(data);
		return root;
	}

	if (root->data > data) root->left = insertInBST(root->left, data);
	else root->right = insertInBST(root->right, data);
	return root;
}

node* buildBST() {
	int data;
	cin >> data;
	node* root = NULL;

	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}

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

// 8 3 10 1 6 14 4 7 13 -1
int main() {
	node* root = buildBST();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	return 0;
}
















