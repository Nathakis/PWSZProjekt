#include <iostream>
#include <vector>
#include "Car.h"
#include "Menu.h"
#include "Worker.h"
#include <fstream>

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;




int main()
{
	setlocale(LC_ALL, "");
	Menu menu;
	Worker worker;
	Car car;
	vector <Worker> workers;
	vector <Car> cars;
	int choisenumber = NULL;
	
	time_t t = time(0);
	int lineNumber;
	string line;
	
	fstream workersList;
	fstream carList;
	workersList.open("workersList.txt", ios::in || ios::out);
	carList.open("carList.txt", ios::in || ios::out);
	if (workersList.good() == false)
	{
		system("cls");
		cout << "B³¹d wczytywania pliku z list¹ pracowników." << endl;
		system("pause");
	}
	if (carList.good() == false)
	{
		system("cls");
		cout << "B³¹d wczytywania pliku z list¹ samochodów. " << endl;
		system("pause");
	}
	//IMPORT WORKERS DATA
	lineNumber = 1;
		while(getline(workersList, line))
		{
			switch (lineNumber)
			{
			case 1:
				workers.push_back(worker);
				workers[lineNumber].setName(line);
				break;
			case 2:
				workers[lineNumber - 1].setSurname(line);
				break;
			case 3:
				workers[lineNumber - 2].setPesel(line);
				break;
			case 4:
				workers[lineNumber - 3].setBirth(line);
			}
			lineNumber++;
			if (lineNumber > 4)
			{
				lineNumber -= 3;
			}
		}

		//IMPORT CARS DATA
		lineNumber = 1;
		while (getline(carList, line))
		{
			switch (lineNumber)
			{
			case 1:
				cars.push_back(car);
				cars[lineNumber].setCarBrand(line);
				break;
			case 2:
				cars[lineNumber - 1].setRegisterNumber(line);
				break;
			case 3:
				cars[lineNumber - 2].setDoneKilometers(line);
				break;
			case 4:
				cars[lineNumber - 3].setOwnerName(line);
				break;
			case 5:
				cars[lineNumber - 4].setRegisterDate(line);
				break;
			}
			lineNumber++;
			if (lineNumber > 5)
			{
				lineNumber -= 4;
			}
		
		}

	

	//MAIN PROGRAM LOOP (MENU)
	while (menu.returnChoiseNumber() !=00)
	{
		cin.clear();
		
		system("cls");

		tm* now = localtime(&t);
		cout << (now->tm_hour) << ":" << (now->tm_min) << ":" << (now->tm_sec) << endl;
		cout << (now->tm_mday) << "." << (now->tm_mon+1) << "." << (now->tm_year+1900) << "r." << endl;

		menu.mainMenu();
		choisenumber = menu.returnChoiseNumber();
		switch (choisenumber)
		{
		case 1:
			system("cls");
			workers.push_back(worker);
			workers[workers.size()-1].addWorker();
			
			break;
		case 2:
			system("cls");
			cout << "IMIÊ I NAZWISKO" << "\t" << "DATA URODZENIA" << "\t" << "PESEL" << endl;
			for (auto i = 0; i < workers.size(); i++)
			{
				cout << workers[i].getName() <<" "<<workers[i].getSurname()<< "\t" <<workers[i].getBirth()<<"\t"<< workers[i].getPesel() << "\t" << endl;
			}
			cout << "Aby powróciæ, naciœnij ENTER";
			system("pause");
			break;
		case 3:
			system("cls");
			cars.push_back(car);
			cars[cars.size()-1].addCar();
				
			break;
		case 4:
			system("cls");
			for (auto i = 0; i < cars.size(); i++)
			{
				cout << "MARKA SAMOCHODU: " <<cars[i].getCarBrand()<< endl;
				cout << "NUMER REJESTRACYJNY: " <<cars[i].getRegisterNumber()<< endl;
				cout << "STAN LICZNIKA: " <<cars[i].getDoneKilometers()<< endl;
				cout << "W£AŒCICIEL: " <<cars[i].getOwnerName()<< endl;
				cout << "DATA PRZYJÊCIA DO WARSZTATU: "<<cars[i].getRegisterDate() << endl<<endl<<endl;
			}
			
			cout << "Aby powróciæ, naciœnij ENTER" << endl;
			system("pause");
			break;
		}
		choisenumber = NULL;
	}

	//export Cars data to file
	for (auto i = 0; i < cars.size(); i++)
	{
		
		carList << cars[i].getCarBrand()<<endl;
		carList << cars[i].getRegisterNumber()<<endl;
		carList << cars[i].getDoneKilometers()<<endl;
		carList << cars[i].getOwnerName()<<endl;
		carList << cars[i].getRegisterDate()<<endl;
	}
	//export workers data to file
	for (auto i = 0; i < workers.size(); i++)
	{
		workersList << workers[i].getName() << endl;
		workersList << workers[i].getSurname() << endl;
		workersList << workers[i].getPesel() << endl;
		workersList << workers[i].getBirth() << endl;

	}





}