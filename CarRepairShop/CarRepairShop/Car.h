#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <winbase.h>
using namespace std;
class Car
{
public:
	Car();
	~Car();

	string getRegisterNumber();
	string getCarBrand();
	string getOwnerName();
	string getRegisterDate();

	int getDoneKilometers();

	void addCar();
	
private:

	int doneKilometers;

	string ownerName;
	string carBrand;
	string registerNumber;
	string registerDate;
	string systemDate;
	SYSTEMTIME st;

	string getSystemDate();
	
};

