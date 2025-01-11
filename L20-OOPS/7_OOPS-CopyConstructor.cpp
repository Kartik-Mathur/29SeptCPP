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

	// Car() {
	// 	cout << "Inside default Constructor\n";
	// }

	Car(char *n, int p, int m, int s) {
		cout << "Parameterized Constructor - 1\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	// 1. Copy Constructor: Jab ek object se doosra object create krte hai
	// Then we call copy constructor
	// Examples: Car B(A); // B Object banana with help of A object
	// Car B = A; // B Object banana with help of A object
	// Ofcourse A car ko argument mei jaana hoga taaki B ko values de skein hum
	// Car (Car &X) {
	// 	cout << "Copy Constructor\n";
	// 	strcpy(name, X.name);
	// 	price = 700;
	// 	model = X.model;
	// 	seats = X.seats;
	// }


};

int main() {

	Car A;
	char n[] = "Audi";
	Car B(n, 100, 2024, 2);


	// Dot operator
	// strcpy(A.name, "BMW");
	// A.price = 100;
	// A.model = 2020;
	// A.seats = 4;


	Car C = B; // Copy Constructor

	// A.print();
	B.print();
	C.print();





	return 0;
}
















