#pragma once
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
#include <winbase.h>
#include <ctime>
#include <algorithm>
using namespace std;
class Car
{
public:
	Car();
	~Car()= default;

	string getRegisterNumber();
	string getCarBrand();
	string getOwnerName();
	string getRegisterDate();
	string getDoneKilometers();

	void setCarBrand(string brand);
	void setRegisterNumber(string number);
	void setDoneKilometers(string kilometers);
	void setOwnerName(string ownerName);
	void setRegisterDate(string date);

	void addCar();
	
private:

	string doneKilometers;
	string ownerName;
	string carBrand;
	string registerNumber;
	string registerDate;
	time_t t = time(0);

	bool isOwnerNameCorrect();
	bool isCarBrandCorrect();
	bool isRegisterNumberCorrect();
	bool isDoneKilometersCorrect();
	
};

