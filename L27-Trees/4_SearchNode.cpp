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

node* searchNode(node* root, int key) {
	if (!root) return NULL;

	if (root -> data == key) return root;

	// Left side se key wali node milli ya nhi pucho
	node* x = searchNode(root->left, key);
	// Agar mill gaye toh return kardo, right mei jaane ki need
	// hai
	if (x != NULL) return x;

	// Agar left se x mei NULL aaya toh matlab ho skta hai right
	// mei key present ho ya nahi ho
	return searchNode(root->right, key);
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root = buildTree();
	node* ans = searchNode(root, 17);

	if (ans) {
		cout << "Found " << ans->data << endl;
	}
	else {
		cout << "Not Found\n";
	}

	return 0;
}
















