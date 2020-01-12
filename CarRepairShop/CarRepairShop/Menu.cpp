#include "Menu.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS


Menu::Menu()
{

}


int Menu::returnChoiseNumber()
{
	return this->choiseNumber;
}

void Menu::mainMenu()
{
	cout << "Witaj w warsztacie samochodowym firmy ABC" << endl;
	cout << "Jesteœ w menu g³ównym";
	cout << endl<<endl;
	cout << this->mainMenuOption1<< endl;
	cout << this->mainMenuOption2<< endl;
	cout <<this->mainMenuOption3<< endl;
	cout <<this->mainMenuOption4 << endl;
	cout << this->exitText << endl << endl;
	cout << this->inputCommand;
	cin >> this->choiseNumber;
	/*switch (choiseNumber)
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
	*/
	cin.clear();
}
void Menu::menuUpdate()
{

}
