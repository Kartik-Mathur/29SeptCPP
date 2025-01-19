#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	char *name;
	int model;
	int seats;

	Car() {
		name = NULL;
	}

	Car(char *n, int p, int m, int s) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	int getPrice() {
		return price;
	}

	void setPrice(int p) {
		if (p > 100 and p < 200)
			price = p;
		else price = 140;
	}

	friend void printFunction(Car &X);
	// Friends can access private data members of class
};


// Yeh function class ke bahar hai
void printFunction(Car &X) {
	cout << "Name   : " << X.name << endl;
	cout << "Model  : " << X.model << endl;
	cout << "Price  : " << X.price << endl;
	cout << "Seats  : " << X.seats << endl << endl;
}


int main() {
	Car A;
	char n[] = "Audi";
	Car B(n, 110, 2024, 2);
	A.name = new char[strlen("BWM") + 1];
	strcpy(A.name, "BMW");
	A.setPrice(180);
	cout << "Price: " << A.getPrice() << endl;

	A.model = 2020;
	A.seats = 4;

	// A.print();
	// B.print();
	printFunction(A);
	printFunction(B);







	return 0;
}
















