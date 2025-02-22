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

int in[] = {2, 4, 3, 8, 1};
int pre[] = {8, 4, 2, 3, 1};
int n = sizeof(pre) / sizeof(int);
int i = 0;

node* buildTree(int s, int e) {
	if (s > e) return NULL;

	node* root = new node(pre[i++]);
	int k;
	for (int j = s; j <= e; ++j)
	{
		if (in[j] == root->data) {
			k = j;
			break;
		}
	}

	root->left = buildTree(s, k - 1);
	root->right = buildTree(k + 1, e);
	return  root;
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

int main() {
	node* root = buildTree(0, n - 1);
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	return 0;
}
















