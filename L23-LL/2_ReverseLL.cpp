#include <iostream>
using namespace std;
#include "llsetup.h"

void reverseLL(node* &head, node* &tail) {
	node* c = head, *p = NULL;
	while (c) {
		node* n = c->next;
		c->next = p;
		p = c;
		c = n;
	}

	swap(head, tail);
}

void reverseLLRec(node* p, node* c, node* &head, node* &tail) {
	// base case
	if (!c) {
		swap(head, tail);
		return;
	}

	node* n = c->next;
	c->next = p;
	reverseLLRec(c, n, head, tail);
}

int main() {

	node* head, *tail;
	head = tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);

	printLL(head);
	// reverseLL(head, tail);
	reverseLLRec(NULL, head, head, tail);
	printLL(head);

	return 0;
}
















