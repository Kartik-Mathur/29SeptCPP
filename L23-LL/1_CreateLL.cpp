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

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		insertAtFront(head, tail, data);
		return;
	}

	if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
		return ;
	}

	node* t = head;
	for (int i = 0; i < pos - 1; ++i)
	{
		t = t->next;
	}

	node* n = new node(data);
	n->next = t->next;
	t->next = n;
}

void deleteAtFront(node *&head, node* &tail) {
	if (!head) return;

	if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		head = head->next;
		delete t;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (!head) return;
	if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	node* t = head;
	while (t->next != tail) t = t->next;

	delete tail;
	tail = t;
	tail->next = NULL;
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* t = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			t = t->next;
		}
		node* n = t->next;
		t->next = n->next;
		delete n;
	}
}

int main() {

	node* head, *tail;
	head = tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);

	insertAtEnd(head, tail, 5);
	insertAtMid(head, tail, 100, 10);

	printLL(head);
	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	deleteAtMid(head, tail, 3);
	printLL(head);

	return 0;
}
















