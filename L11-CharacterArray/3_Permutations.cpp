#include <iostream>
using namespace std;

bool isPermutations(char *a, char *b) {
	int freq[26] = {0};
	// Pehle freq array ko update karo a[] se
	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx]++;
	}

	// Ab doosre b[] se decrease karo freq[] ko
	for (int i = 0; b[i] != '\0'; ++i)
	{
		char ch = b[i];
		int indx = ch - 'a';
		freq[indx]--;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) return false;
	}

	return true;
}


int main() {

	char a[] = "abcc";
	char b[] = "bcac";

	if (isPermutations(a, b)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	return 0;
}
















