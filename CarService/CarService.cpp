#include "CarService.h"
#include "utils.h"

void CarService::initializeFromFile() {
	size = 0;
	capacity = 10;
	cars = new Car[capacity];
	ifstream file("baza.txt");
	if (file.good()) {
		//...wczytujemy
	}
}

void CarService::printMenu() {
	cout <<
		"0: End\n" <<
		"1: Print All\n" <<
		"2: Add car\n" <<
		"3: Find car\n" <<
		"4: Help\n";
}

void CarService::printAll() {
	Car car;
	car.print();
	//iteracja po samochodach, wywolanie na kazdym print()
	for (int i = 0; i < size; i++)
		cars[i].print();
}

void CarService::addCar() {
	Car car;
	car.read();
	for (int i = 0; i < size; i++) {
		cars[i].read();
	}
	//dodanie do tablicy
}

void CarService::printParamMemu() {
	//wypisujemy ktora liczba odpowiada za ktory parametr wyszukiwania
	
	string model, color, year, milage;
	model = 1;
	color = 2;
	year = 3;
	milage = 4;

}

void CarService::findCar() {
	//zapytanie o parametr (model/kolor/rocznik/przebieg)
	int param;
	printParamMemu();
	cin >> param;

	string stringValue;
	int intValue;

	switch (param) {
	case 0: //powrot
		break;
	case 1: //model
		//zapytanie o wartosc parametru (model czyli pole w Car typu string)
		cin >> stringValue;
		//wyszukiwnaie
		for (int i = 0; i < size; i++) {
			if (cars[i].model == stringValue)
				cars[i].print();
		}
		break;
	case 2: //kolor
		cin >> stringValue;
		//wyszukiwnaie
		for (int i = 0; i < size; i++) {
			if (cars[i].color == stringValue)
				cars[i].print();
		}
		break;
	case 3: //rocznik
		cin >> intValue;
		//wyszukiwnaie
		for (int i = 0; i < size; i++)
			if (cars[i].year == intValue)
				cars[i].print();
		break;
	case 4: //przebieg
		cin >> intValue;
			//wyszukiwnaie
		for (int i = 0; i < size; i++)
			if (cars[i].milage == intValue)
				cars[i].print();
		break;
	default:
		cout << "Invalid action\n";
	}

	//na tej podstawie wyszukujemy samochody ktore spelniaja kryterium
	//wyswietlamy wszystkie pasujace
}

void CarService::run() {
	initializeFromFile();
	printMenu();
	int action;
	do {
		cout << ">> ";
		cin >> action;
		switch (action) {
		case 0:
			break;
		case 1:
			printAll();
			break;
		case 2:
			addCar();
			break;
		case 3:
			findCar();
			break;
		case 4:
			printMenu();
			break;
		default:
			cout << "Invalid action\n";
		}
	} while (action != 0);
}

 
