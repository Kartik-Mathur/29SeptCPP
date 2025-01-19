#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	char *name;
	int model;
	int seats;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	// Initialisation list is provided this way
	Car() : name(NULL) {
		// name = NULL;

	}

	Car (Car &X) {
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name;
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	int getPrice() {
		return price;
	}

	void setPrice(int p) {
		if (p > 100 and p < 200)
			price = p;
		else price = 140;
	}

	void setName(char *n) {
		if (name != NULL) delete []name;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
};


// cout : ostream class ka object
ostream& operator<<(ostream& obj, Car &X) {
	cout << "Name   : " << X.name << endl;
	cout << "Model  : " << X.model << endl;
	cout << "Price  : " << X.getPrice() << endl;
	cout << "Seats  : " << X.seats << endl << endl;
	return cout;
}


int main() {

	Car A;
	A.setName("BMW");
	A.setPrice(100); A.model = 2024; A.seats = 4;
	Car B;
	B.setName("Audi");
	B.setPrice(100); B.model = 2024; B.seats = 4;

	Car C = B;
	Car D = C;

	D.name[0] = 'T';


	// A.print();
	// B.print();
	// C.print();
	cout << A << endl;








	return 0;
}
















