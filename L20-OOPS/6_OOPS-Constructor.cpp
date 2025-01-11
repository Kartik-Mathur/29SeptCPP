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
		cout << "Seats  : " << seats << endl;
	}

	// 1. Default Constructor: Function that gets called when object is created
	// Doesn't have any return type, is same as Class Name
	Car() {
		cout << "Inside default Constructor\n";
	}

	// 2. Parameterized Constructor: Function that gets called when object is created
	// and user wants to provide the values as well for data members of the object
	Car(char *n, int p, int m, int s) {
		cout << "Parameterized Constructor - 1\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Parameterized Constructor
	Car(char *n, int p, int m) {
		cout << "Parameterized Constructor - 2\n";

		strcpy(name, n);
		price = p;
		model = m;
	}


};

int main() {

	Car A; // Default constructor call krega
	// A is an Object of class Car
	Car B("Audi", 100, 2024, 2);// Parameterized Constructor call krega
	Car C("Audi", 100, 2024);// Parameterized Constructor-2 call krega

	// Dot operator
	strcpy(A.name, "BMW");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;



	A.print();
	B.print();
	C.print();





	return 0;
}
















