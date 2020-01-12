#include "Car.h"

Car::Car()
{
	tm* now = localtime(&t);
	this->registerDate= to_string((now->tm_hour)) + ":" + to_string((now->tm_min)) + ":" + to_string((now->tm_sec)) + "\t" + to_string((now->tm_mday)) + "." + to_string((now->tm_mon + 1)) + "." + to_string((now->tm_year + 1900)) + "r.";
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
	isCarBrandCorrect();
	cout <<endl<< "Podaj stan licznika: ";
	cin >> doneKilometers;
	while (isDoneKilometersCorrect() == false)
	{
		cout << "Nast¹pi³a pomy³ka, spróbuj ponownie podaæ liczbê przejechanych kilometrów: ";
		cin >> this->doneKilometers;
	}
	cout << endl << "Podaj nr rejestracyjny pojazdu: ";
	cin >> this->registerNumber;
	while (isRegisterNumberCorrect() == false)
	{
		cout << "Nast¹pu³a pomy³ka, spróbuj ponownie podaæ numer rejestracyjny pojazdu: ";
		cin >> this->registerNumber;
	}
	cout << endl << "Podaj imiê i nazwisko w³aœciciela";
	getline(cin,this->ownerName);
	while (isOwnerNameCorrect() == false)
	{
		cout << "Nast¹pi³a pomy³ka, wpisz imiê i nazwisko ponownie";
		getline(cin, this->ownerName);
	}
	cin.clear();
}
string Car::getRegisterDate()
{
	return this->registerDate;
}
bool Car::isOwnerNameCorrect()
{
	ownerName[0] = toupper(ownerName[0]);
	for (auto i = 1; i < ownerName.length(); i++)
	{
		ownerName[i] = tolower(ownerName[i]);
	}
	ownerName[ownerName[ownerName.find * (ownerName.begin(), ownerName.end(), ' ') + 1]] = toupper(ownerName[ownerName.find * (ownerName.begin(), ownerName.end(), ' ')& + 1]);				///DO NAPRAWIENIA

	for (auto i = 0; i < ownerName.length(); i++)
	{
		if (ownerName[i] < 65 || (ownerName[i] > 90 && ownerName[i] < 97) || ownerName[i]>122)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
	
}
bool Car::isCarBrandCorrect()
{
this->carBrand[0] = toupper(this->carBrand[0]);
	for (auto i = 1; i < carBrand.length(); i++)
	{
		this->carBrand[i] = tolower(this->carBrand[i]);
	}
	return true;
}
bool Car::isRegisterNumberCorrect()
{
	for (auto i = 0; i <registerNumber.length(); i++)
	{
		if (registerNumber[i] < 48 || (registerNumber[i] > 57 && registerNumber[i] < 65) || (registerNumber[i]>90 && registerNumber[i]<97)||registerNumber[i]>122)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
