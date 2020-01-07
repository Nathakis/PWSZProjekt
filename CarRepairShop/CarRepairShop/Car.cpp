#include "Car.h"

Car::Car()
{
	
	GetSystemTime(&this->st);
	this->systemDate = to_string(this->st.wDayOfWeek) + "." + to_string(this->st.wMonth)+"." + to_string(this->st.wYear) + "r";
	this->registerDate = this->getSystemDate();
}
string Car::getRegisterNumber()
{
	return this->registerNumber;
}
string Car::getCarBrand()
{
	return this->carBrand;
}
string Car::getOwnerName()
{
	return this->ownerName;
}
int Car::getDoneKilometers()
{
	return this->doneKilometers;
}
void Car::addCar()
{
	cout << "podaj markê samochodu: ";
	cin >> carBrand;
	cout <<endl<< "Podaj stan licznika: ";
	cin >> doneKilometers;
	cout << endl << "Podaj nr rejestracyjny pojazdu: ";
	cin >> registerNumber;
	cout << endl << "Podaj imiê i nazwisko w³aœciciela";
	getline(cin,ownerName);
}
string Car::getRegisterDate()
{
	return this->registerDate;
}
string Car::getSystemDate()
{
	return this->systemDate;
}