#include <iostream>
using namespace std;

class Car {
public:
	// Data members
	char name[100];
	int model;
	int seats;
	int price;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	Car() {
		cout << "Inside default Constructor\n";
	}

	Car(char *n, int p, int m, int s) {
		cout << "Parameterized Constructor - 1\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}
	Car (Car &X) {
		cout << "Copy Constructor\n";
		strcpy(name, X.name);
		price = 700;
		model = X.model;
		seats = X.seats;
	}

	void operator=(Car X) {
		cout << "Copy Assignment\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	bool operator>(Car &X) {
		return price > X.price;
	}

	// Destructor
	~Car() {
		cout << "Deleting car " << name << endl;
	}
};

int main() {

	Car A;
	char n[] = "Audi";
	Car B(n, 100, 2024, 2);


	// Dot operator
	strcpy(A.name, "BMW");
	A.price = 500;
	A.model = 2020;
	A.seats = 4;
	Car C = B;
	C = A; // Copy assignment operator


	A.print();
	B.print();
	C.print();

	if (A > B) cout << "A is more expensive\n";
	else cout << "B is more expensive\n";






	return 0;
}
















