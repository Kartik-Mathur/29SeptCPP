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
			mul *= 59;
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

	node* search(string key) {
		int indx = hashFunction(key);
		node* head = a[indx];

		while (head) {
			if (head->key == key) return head;

			head = head->next;
		}

		return NULL;
	}

	int& operator[](string key) {
		node* x = search(key);

		if (!x) {
			int garbage;
			insert(key, garbage);
			x = search(key);
		}

		return x->value;
	}

};

int main() {
	hashmap h;
	// h.insert("Mango", 100);
	// Another way to perform
	// h["Mango"] = 100; // Insertion
	// h["Mango"] = 120; // Updation
	// cout << h["Mango"] << endl; // Print
	// h.insert("Apple", 120);
	// h.insert("Kiwi", 80);
	// h.insert("Pineapple", 30);
	// h.insert("Dragonfruit", 90);
	// h.insert("Orange", 190);
	// h.insert("Guava", 60);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string key; int value;
		cin >> key >> value;

		h[key] = value;
	}

	h.print();

	return 0;
}
















