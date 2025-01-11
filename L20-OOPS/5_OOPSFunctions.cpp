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
};

int main() {

	Car A; // Meine A variable bana lia of Car(Modern/UserDefined Datatype)
	// A is an Object of class Car

	// Dot operator
	strcpy(A.name, "BMW");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	Car B;
	strcpy(B.name, "Audi");
	B.price = 100;
	B.model = 2024;
	B.seats = 2;

	A.print();
	B.print();





	return 0;
}
















