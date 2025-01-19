#include <iostream>
using namespace std;

class Car {
private:
	// Private data members are not accessible outside the class
	int price;
public:
	// Data members
	char *name;
	int model;
	int seats;


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
		if (p > 100 and p < 200)
			price = p;
		else price = 140;
		model = m;
		seats = s;
	}

	Car (Car &X) {
		cout << "Copy Constructor\n";
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		if (X.price > 100 and X.price < 200)
			price = X.price;
		else price = 140;

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

	// GETTER FOR PRICE
	int getPrice() {
		return price;
	}
	// SETTER FOR PRICE
	void setPrice(int p) {
		if (p > 100 and p < 200)
			price = p;
		else price = 140;
	}
};


int main() {

	Car A;
	char n[] = "Audi";
	Car B(n, 110, 2024, 2);


	// Dot operator
	A.name = new char[strlen("BWM") + 1];
	strcpy(A.name, "BMW");
	// Private data members ke liye hum do cheeze banate hai
	// 1. Getter: To get the value of private data member
	// 2. Setter: To update the value of private data member
	// A.price = -500; // Private members cannot be accessed outside class: ERROR AAEGA
	A.setPrice(180);
	cout << "Price: " << A.getPrice() << endl;

	A.model = 2020;
	A.seats = 4;
	Car C = B;
	C = A; // Copy assignment operator


	A.print();
	B.print();
	C.print();








	return 0;
}
















