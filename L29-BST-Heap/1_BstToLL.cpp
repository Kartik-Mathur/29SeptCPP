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

class LinkedList {
public:
	node* head, *tail;
};

LinkedList bstToLL(node* root) {
	// base case
	if (!root) {
		return {NULL, NULL};
	}

	// recursive case
	// Agar root->left!=NULL means LST exist karta h
	// Agar root->right!=NULL means RST exist karta h
	if (root->left and root->right) {
		LinkedList left = bstToLL(root->left);
		LinkedList right = bstToLL(root->right);

		left.tail->right = root;
		root->right = right.head;
		return {left.head, right.tail};
	}
	else if (root->left and !root->right) {
		LinkedList left = bstToLL(root->left);
		left.tail->right = root;
		return {left.head, root};
	}
	else if (!root->left and root->right) {
		LinkedList right = bstToLL(root->right);
		root->right = right.head;
		return {root, right.tail};
	}
	else {
		return {root, root};
	}
}


// 8 3 10 1 6 14 4 7 13 9 -1
int main() {
	node* root = buildBST();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	LinkedList l = bstToLL(root);

	node* head = l.head;
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";

	return 0;
}













