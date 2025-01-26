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

node* midLL(node* head) {
	if (!head || !head->next) return head;
	node* f = head->next;
	node* s = head;
	while (f and f->next) { // f != NULL and f->next != NULL
		f = f->next->next;
		s = s->next;
	}

	return s;
}

node* mergeSort(node* head) {
	// base case
	if (!head || !head->next) return head;

	// recursive case
	node* mid = midLL(head);
	// 1. Divide
	node* a = head;
	node* b = mid->next;
	mid->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* c = merge(a, b);
	return c;
}

int main() {
	node* head, *tail;
	head = tail = NULL;
	// Both the lists are sorted that we are planning to merge
	// result should also be sorted only
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);


	printLL(head);
	head = mergeSort(head);
	printLL(head);


	return 0;
}
















