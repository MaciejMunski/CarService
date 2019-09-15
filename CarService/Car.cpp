#include "Car.h"

void Car::read() {
	cout << "Model: ";
	cin >> model;
	cout << "Kolor: ";
	cin >> color;
	cout << "Rocznik: ";
	cin >> year;
	cout << "Przebieg: ";
	cin >> milage;
	//...
}

void Car::print() {
	cout << "Model: " << model << endl;
	cout << "Kolor" << color << endl;
	cout << "Rocznik" << year << endl;
	cout << "przebieg" << milage << endl;
	//...
}