#include <iostream>
using namespace std;
#include "llsetup.h"

node* merge(node* a, node* b) {
	// base case
	if (!a) return b;
	if (!b) return a;
	// recursive case
	node* c = NULL;
	if (a->data < b->data) {
		c = a;
		c->next = merge(a->next, b);
	}
	else {
		c = b;
		c->next = merge(a, b->next);
	}
	return c;
}

int main() {
	node* head, *tail, * head1, *tail1;;
	head = tail = NULL;
	head1 = tail1 = NULL;
	// Both the lists are sorted that we are planning to merge
	// result should also be sorted only
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 4);

	insertAtEnd(head1, tail1, 1);
	insertAtEnd(head1, tail1, 3);
	insertAtEnd(head1, tail1, 5);
	insertAtEnd(head1, tail1, 6);


	printLL(head); // 2->4
	printLL(head1); // 1->3->5->6

	node*x = merge(head, head1);
	printLL(x);

	// 1->2->3->4->5->6->NULL

	return 0;
}
















