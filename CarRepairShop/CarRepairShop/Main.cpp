#include <iostream>
#include <vector>
#include "Car.h"
#include "Menu.h"
#include "Worker.h"

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
	int iWorker = 0, iCar = 0;

	
	while (menu.returnChoiseNumber() !=0)
	{
		cin.clear();
		
		system("cls");
		menu.mainMenu();
		choisenumber = menu.returnChoiseNumber();
		switch (choisenumber)
		{
		case 1:
			system("cls");
			workers.push_back(worker);
			workers[workers.size()-1].addWorker();
			iWorker++;
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
				iCar++;
			break;
		case 4:
			system("cls");
			cout << "MARKA SAMOCHODU" << "\t" << "NUMER REJESTRACYJNY" << "\t" << "STAN LICZNIKA" << "\t" << "W£AŒCICIEL" << "\t" << "DATA PRZYJÊCIA DO WARSZTATU" << endl;
			for (auto i = 0; i < cars.size(); i++)
			{
				cout << cars[i].getCarBrand() << "\t" << cars[i].getRegisterNumber() << "\t" << cars[i].getDoneKilometers() << "\t" <<cars[i].getOwnerName()<<"\t"<<cars[i].getRegisterDate()<< endl;
			}
			cout << "Aby powróciæ, naciœnij ENTER";
			system("pause");
			break;
		}
		choisenumber = NULL;
	}






}