#include <iostream>
using namespace std;
#include "llsetup.h"

void bubbleSortLL(node* &head) {
	int N = lengthLL(head);
	for (int i = 0; i < N - 1; ++i)
	{
		node* c = head, *p = NULL, *n;
		while (c and c->next) {
			n = c ->next;
			if (c->data > n->data) {
				// Swapping hogi
				if (p == NULL) {
					// Head swap hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else {
					// Head swap nahi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// Swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
}


int main() {
	node* head, *tail;
	head = tail = NULL;
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);


	printLL(head);
	bubbleSortLL(head);
	printLL(head);


	return 0;
}
















