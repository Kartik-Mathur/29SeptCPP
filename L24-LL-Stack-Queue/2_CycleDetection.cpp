#include <iostream>
using namespace std;
#include "llsetup.h"

void breakCycle(node* head, node* f) {
	node* s = head;
	node* fp = head;
	while (fp->next != f) fp = fp->next;

	while (f != s) {
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool cycleDetect(node* head) {
	node* s = head, *f = head;
	while (f and f->next) {
		f = f->next->next;
		s = s->next;

		if (f == s) {
			breakCycle(head, f);
			return true;
		}
	}
	return false;
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
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);

	printLL(head);

	tail->next = head->next->next->next->next;

	if (cycleDetect(head)) cout << "cycle hai\n";
	else cout << "Cycle nhi hai\n";

	printLL(head);

	return 0;
}
















