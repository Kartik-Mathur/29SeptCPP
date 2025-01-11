#include <iostream>
using namespace std;

class Car {
public:
	// Data members
	char name[100];
	int model;
	int seats;
	int price;
};

int main() {

	Car A; // Meine A variable bana lia of Car(Modern/UserDefined Datatype)
	// A is an Object of class Car

	// Dot operator
	strcpy(A.name, "BMW");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	cout << "Name   : " << A.name << endl;
	cout << "Model  : " << A.model << endl;
	cout << "Price  : " << A.price << endl;
	cout << "Seats  : " << A.seats << endl;

	Car B;
	strcpy(B.name, "Audi");
	B.price = 100;
	B.model = 2024;
	B.seats = 2;

	cout << "Name   : " << B.name << endl;
	cout << "Model  : " << B.model << endl;
	cout << "Price  : " << B.price << endl;
	cout << "Seats  : " << B.seats << endl;





	return 0;
}
















