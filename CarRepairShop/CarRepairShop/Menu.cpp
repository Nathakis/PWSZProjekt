#include "Menu.h"


Menu::Menu()
{
	this->status = true;
}


int Menu::returnChoiseNumber()
{
	return this->choiseNumber;
}
bool Menu::returnStatus()
{
	return this->status;
}
void Menu::MainMenu()
{
	system ("cls");
	cout << "Witaj w warsztacie samochodowym firmy ABC" << endl;
	cout << "Jesteœ w menu g³ównym";
	cout <<this->dateTime<< localtime << endl<<endl;
	cout << this->mainMenuOption1<< endl;
	cout << this->mainMenuOption2<< endl;
	cout <<this->mainMenuOption3<< endl;
	cout <<this->mainMenuOption4 << endl;
	cout << this->exitText << endl << endl;
	cout << this->inputCommand;
	cin >> this->choiseNumber;
	switch (choiseNumber)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 00:
		status = false;
		break;
	}

}
void Menu::menuUpdate()
{

}