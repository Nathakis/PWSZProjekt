#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

class Menu
{
public:
	Menu();
	~Menu() = default;

	int returnChoiseNumber();
	void mainMenu();

	void menuUpdate();




private:
	int choiseNumber = 1;

	const string welcome = "Witaj w warsztacie samochodowym firmy ABC";
	const string dateTime = "godzina i data";
	const string returnText = "Jeœli chcesz powróciæ, wpisz 0";
	const string exitText = "00. Wyjœcie z programu";

	const string mainMenuOption1 = "1. Zarejestruj pracownika ";
	const string mainMenuOption2 = "2. Lista pracowników";
	const string mainMenuOption3 = "3. Zarejestruj samochód do naprawy";
	const string mainMenuOption4 = "4. Lista naprawianych samochodów";
	const string inputCommand = "Wpisz polecenie: ";
	
};

