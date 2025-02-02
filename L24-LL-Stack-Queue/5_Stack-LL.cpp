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

class Stack {
private:
	node* head;

public:

	Stack() {
		head = NULL;
	}

	void push(int d) {
		node* n = new node(d);
		n->next = head;
		head = n;
	}

	void pop() {
		node* t = head;
		head = head->next;
		delete t;
	}

	bool empty() {
		return head == NULL;
	}


	int top() {
		return head->data;
	}
};


int main() {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}



	return 0;
}
















