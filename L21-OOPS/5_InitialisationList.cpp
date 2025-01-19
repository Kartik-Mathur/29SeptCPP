#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	char *name;
	int model;
	int seats;
	const int tyres; // They have to be initialised
	static int totalCars; // Jo class ko belong karta hai, uski copy objects ke pass nahi hoti
	// Objects usse access jarror kar skte hai

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl;
		cout << "Tyres  : " << tyres << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	// Initialisation list is provided this way
	Car() : tyres(4), name(NULL) {
		// name = NULL;
		totalCars++;

	}

	Car(char *n, int p, int m, int s)  : tyres(4) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
		totalCars++;
	}


	// Car (Car &X) : tyres(100) Iska matlab hai initialisation
	Car (Car &X) : tyres(100) {
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name;
		price = X.price;
		model = X.model;
		seats = X.seats; // Assignment
		totalCars++;
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

	~Car() {
		totalCars--;
	}

};

// Car ke scope ke andar totalCars ka variable
int Car::totalCars = 0;


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


	A.print();
	B.print();
	C.print();

	cout << "Total Cars: " << Car::totalCars << endl;
	cout << "Total Cars: " << A.totalCars << endl;

	// Constant buckets are always initialised, otherwise error aata hai
	// const int x = 100;
	// const int x; // This is not allowed








	return 0;
}
















