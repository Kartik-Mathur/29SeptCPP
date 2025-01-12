#include <iostream>
using namespace std;

class Car {
public:
	// Data members
	char *name;
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
		name = NULL;
		cout << "Inside default Constructor\n";
	}

	Car(char *n, int p, int m, int s) {
		cout << "Parameterized Constructor - 1\n";
		name = new char[strlen(n) + 1]; // name yaha par memory lega tabhi
		// data copy kar skte hai uske andar
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	Car (Car &X) {
		cout << "Copy Constructor\n";
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = 700;
		model = X.model;
		seats = X.seats;
	}

	// 3. Copy Assignment Operator: Already created object ko update karna ho
	// Toh yeh function call hota hai (By default exist krta hai)
	void operator=(Car X) {
		cout << "Copy Assignment\n";
		if (name != NULL) delete []name;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}


};

int main() {

	Car A;
	char n[] = "Audi";
	Car B(n, 100, 2024, 2);


	// Dot operator
	A.name = new char[strlen("BWM") + 1];
	strcpy(A.name, "BMW");
	A.price = 500;
	A.model = 2020;
	A.seats = 4;
	Car C = B;
	C = A; // Copy assignment operator


	A.print();
	B.print();
	C.print();








	return 0;
}
















