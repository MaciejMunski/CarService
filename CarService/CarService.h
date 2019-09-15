#pragma once

#include "Car.h"
#include <fstream>

class CarService {
	Car* cars;
	int size;
	int capacity;

	void initializeFromFile();
	void printMenu();
	void printAll();
	void addCar();
	void printParamMemu();
	void findCar();

public:
	void run();
};
