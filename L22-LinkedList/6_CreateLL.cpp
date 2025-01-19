#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next; // self-referential class
	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtFront(node* &head, node* &tail, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		n -> next = head;
		head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}


int main() {

	node* head, *tail;
	head = tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);
	insertAtEnd(head, tail, 5);

	printLL(head);
	printLL(head);

	return 0;
}
















