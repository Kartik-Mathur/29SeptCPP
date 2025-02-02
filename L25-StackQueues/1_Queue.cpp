#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Queue {
	node* head, *tail;
public:
	Queue() {
		head = tail = NULL;
	}

	void push(int d) {
		node* n = new node(d);
		if (!head) {
			head = tail = n;
		}
		else {
			tail->next = n;
			tail = n;
		}
	}

	void pop() {
		if (!head) return;
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* t = head;
			head = head->next;
			delete t;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}
};

int main() {

	Queue q;

	for (int i = 1; i < 5; ++i)
	{
		q.push(i);
	}

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;
	return 0;
}
















