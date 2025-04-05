#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char ch;
	bool isEnd;
	unordered_map<char, node*> h;
	node(char c) {
		ch = c;
		isEnd = false;
	}
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node('\0');
	}

	void insert(string word) {
		node* temp = root; // To ensure root node kho na jaaye
		for (int i = 0 ; i < word.size(); i++) {
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				temp->h[ch] = new node(ch);
			}
			temp = temp->h[ch];
		}

		temp->isEnd = true;
	}

	void autoFillHelper(string word, node*temp) {
		if (temp->isEnd) cout << word << endl;

		for (auto p : temp->h) {
			autoFillHelper(word + p.first, p.second);
		}
	}


	void autoFill(string word) {
		node* temp = root; // To ensure root node kho na jaaye
		for (int i = 0 ; i < word.size(); i++) {
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return;
			}
			temp = temp->h[ch];
		}

		autoFillHelper(word, temp);
	}
};

int main() {

	Trie t;

	t.insert("Hello");
	t.insert("Code");
	t.insert("Coder");
	t.insert("Her");
	t.insert("He");


	t.autoFill("C");


	return 0;
}
















