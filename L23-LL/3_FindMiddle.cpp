#include <iostream>
using namespace std;
#include "llsetup.h"

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


int main() {
	node* head, *tail;
	head = tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);

	printLL(head);
	node* x = midLL(head);
	cout << x->data << endl;



	return 0;
}
















