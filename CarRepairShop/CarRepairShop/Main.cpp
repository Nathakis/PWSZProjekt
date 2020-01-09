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
	vector <Worker> workers;
	//vector <Car> cars;
	int choisenumber = NULL;
	int iteration = 0;
	
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
			break;
		case 2:
			for (auto i = 0; i < workers.size(); i++)
			{
				cout << workers[i].getName() <<" "<<workers[i].getSurname()<< "\n" << workers[i].getPesel() << "\n" << endl;
			}
			cout << "Aby powróciæ, naciœnij ENTER";
			system("pause");
			break;
		case 3:
			//menu.registerCar();
			break;
		case 4:
			//menu.carList();
			break;
		}
		iteration++;
		choisenumber = NULL;
	}






}