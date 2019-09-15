#pragma once

#include <string>
#include <iostream>

using namespace std;

class Car {
public:
	string model;
	string color;
	int year;
	int milage;

	void read();
	void print();
};