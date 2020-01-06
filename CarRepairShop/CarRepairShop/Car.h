#pragma once
#include <iostream>

using namespace std;
class Car
{
public:
	Car();
	~Car();
	string getRegisterNumber();
	string getCarBrand();
	string getOwnerName();
	int getDoneKilometers();
	void addCar();
private:
	int doneKilometers;
	string ownerName;
	string carBrand;
	string registerNumber;

};

