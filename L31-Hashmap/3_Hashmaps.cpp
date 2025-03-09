#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node(string k, int v) {
		key = k;
		value = v;
		next = NULL;
	}
};

class hashmap {

	int hashFunction(string key) {
		int ans = 0;
		int mul = 1;

		for (int i = 0; i < key.size(); ++i)
		{
			ans += ( (key[i] % ts) * (mul % ts) ) % ts;
			mul *= 23;
			mul %= ts;
		}

		return ans % ts;
	}

	void rehash() {
		node** olda = a;
		int oldts = ts;
		a = new node*[2 * ts];
		ts *= 2;
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];

			while (head) {
				insert(head->key, head->value);
				head = head->next;
			}

			cout << endl;
		}

	}

public:
	node** a;
	int ts;
	int cs;

	hashmap(int s = 5) {
		a = new node*[s];
		ts = s;
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int value) {
		// key ko integer mei convert karo: hashFunction
		int indx = hashFunction(key);

		node* n = new node(key, value);
		n->next = a[indx];
		a[indx] = n;
		cs++;

		float load_factor = cs / (1.0 * ts);

		if (load_factor >= 0.6) rehash();
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			cout << i << " : ";
			node* head = a[i];

			while (head) {
				cout << "(" << head->key << ", " << head->value << ") ";
				head = head->next;
			}

			cout << endl;
		}
	}
};

int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("Kiwi", 80);
	h.insert("Pineapple", 30);
	h.insert("Dragonfruit", 90);
	h.insert("Orange", 190);
	h.insert("Guava", 60);

	h.print();

	return 0;
}
















