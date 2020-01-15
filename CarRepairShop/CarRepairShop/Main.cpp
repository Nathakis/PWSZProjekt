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
	int vectorNumber;
	string line;
	
	fstream workersList;
	fstream carList;

	workersList.open("workersList.txt", ios::in);
	carList.open("carList.txt", ios::in);
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
	vectorNumber = 0;
		while(getline(workersList, line))
		{
			switch (lineNumber)
			{
			case 1:
				workers.push_back(worker);
				workers[vectorNumber].setName(line);
				break;
			case 2:
				workers[vectorNumber].setSurname(line);
				break;
			case 3:
				workers[vectorNumber].setPesel(line);
				break;
			case 4:
				workers[vectorNumber].setBirth(line);
			}
			lineNumber++;
			if (lineNumber > 4)
			{
				lineNumber -= 3;
				vectorNumber++;
			}
		}

		//IMPORT CARS DATA
		lineNumber = 1;
		vectorNumber = 0;
		while (getline(carList, line))
		{
			switch (lineNumber)
			{
			case 1:
				cars.push_back(car);
				cars[vectorNumber].setCarBrand(line);
				break;
			case 2:
				cars[vectorNumber].setRegisterNumber(line);
				break;
			case 3:
				cars[vectorNumber].setDoneKilometers(line);
				break;
			case 4:
				cars[vectorNumber].setOwnerName(line);
				break;
			case 5:
				cars[vectorNumber].setRegisterDate(line);
				break;
			}
			lineNumber++;
			if (lineNumber > 5)
			{
				lineNumber -= 4;
				vectorNumber++;
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
	carList.close();
	workersList.close();
	fstream workersListSave("workersList.txt",ios::out);
	fstream carListSave("carList.txt",ios::out);

	//export Cars data to file
	for (auto i = 0; i < cars.size(); i++)
	{
		
		carListSave << cars[i].getCarBrand()<<endl;
		carListSave << cars[i].getRegisterNumber()<<endl;
		carListSave << cars[i].getDoneKilometers()<<endl;
		carListSave << cars[i].getOwnerName()<<endl;
		carListSave << cars[i].getRegisterDate()<<endl;
	}
	//export workers data to file
	for (auto i = 0; i < workers.size(); i++)
	{
		workersListSave << workers[i].getName() << endl;
		workersListSave << workers[i].getSurname() << endl;
		workersListSave<< workers[i].getPesel() << endl;
		workersListSave << workers[i].getBirth() << endl;

	}
	workersListSave.close();
	carListSave.close();
	





}