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
	bool returnStatus();
	void MainMenu();
	void registerWorker();
	void workersList();
	void registerCar();
	void carList();

	void menuUpdate();
	void checkInputOnlyNumbers();
	void checkInputOnlyLetters();
	void checkCarBoardIsCorrect();


private:
	int choiseNumber = NULL;
	bool status = NULL;

	const string welcome = "Witaj w warsztacie samochodowym firmy ABC";
	const string dateTime = "godzina i data";
	const string returnText = "Jeœli chcesz powróciæ, wpisz 0";
	const string exitText = "00. Wyjœcie z programu";

	const string mainMenuOption1 = "1. Zarejestruj pracownika ";
	const string mainMenuOption2 = "2. Lista pracowników";
	const string mainMenuOption3 = "3. Zarejestruj samochód do naprawy";
	const string mainMenuOption4 = "4. Lista naprawianych samochodów";
	const string inputCommand = "Wpisz polecenie: ";

	const string registerWorkerText1 = "Podaj imiê pracownika: ";
	const string registerWorkerText2 = "Podaj nazwisko pracownika: ";
	const string registerWorkerText3 = "podaj nr pesel pracownika: ";

	const string workersListText1 = "Lista pracowników: ";
	const string workersListText2 = "Imiê i nazwisko \t Data urodzenia \t Wiek \t PESEL";

	const string registerCarText1 = "Podaj markê pojazdu: ";
	const string registerCarText2 = "Podaj nr rejestracji pojazdu: ";
	const string registerCarText3 = "Podaj stan licznika pojazdu: ";
	const string registerCarText4 = "Imiê i nazwisko w³aœciciela pojazdu: ";

	const string carListText1 = "Lista zarejestrowanych pojazdów do naprawy:";
	const string carListText2 = "Marka pojazdu \t nr rejestracji \t stan licznika \t imiê i nazwisko w³aœciciela";

	
};

