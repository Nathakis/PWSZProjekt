#include "Menu.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS


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
void Menu::mainMenu()
{
	system ("cls");
	cout << "Witaj w warsztacie samochodowym firmy ABC" << endl;
	cout << "Jeste� w menu g��wnym";
	cout <<this->dateTime<< localtime << endl<<endl;
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

void Menu::doNull()
{
	this->choiseNumber = NULL;
	cin.clear();
}
