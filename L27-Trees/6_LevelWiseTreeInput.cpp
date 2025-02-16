#include <iostream>
#include <queue>
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

node* inputTreeLevelWise() {
	queue<node*>q;

	int d;
	cout << "Enter root data : ";
	cin >> d;
	if (d == -1) return NULL;
	node* root = new node(d);
	q.push(root);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();
		cout << "Enter children of " << x->data << " : ";
		int l, r;
		cin >> l >> r;

		if (l != -1) {
			x -> left = new node(l);
			q.push(x->left);
		}

		if (r != -1) {
			x -> right = new node(r);
			q.push(x->right);
		}
	}

	return root;
}

void printLevelOrder(node* root) {
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();
		if (x == NULL) {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
		else {
			cout << x->data << " ";
			if (x->left) q.push(x->left);
			if (x->right) q.push(x->right);
		}
	}

}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// node* root = inputTreeLevelWise();
	node* root = buildTree();
	// preOrder(root);
	// cout << endl;
	// inOrder(root);
	// cout << endl;
	// postOrder(root);
	// cout << endl;
	printLevelOrder(root);


	return 0;
}
















