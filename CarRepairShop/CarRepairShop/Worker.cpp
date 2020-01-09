#include "Worker.h"
Worker::Worker()
{
	this->birthdate = "";
	this->pesel = "";
	this->name = "";
	this->surname = "";

}

void Worker::addWorker()
{
	std::cout << "Podaj Imiê pracownika: ";
	std::cin >> this->name;
	if (checkName() == false)
	{
		while (checkName()==false)
		{
			{
				cout << endl << "W twoim zapisie wkrad³e siê b³¹d, spróbuj ponownie wpisaæ imiê pracownika: ";
				cin >> this->name;
			}
		}
	}
	std::cout << std::endl << "Podaj nazwisko pracownika";
	std::cin >> this->surname;
	if (checkSurname() == false)
	{
		while (checkSurname()==false)
		{
			{
				cout << endl << "W twoim zapisie wkrad³e siê b³¹d, spróbuj ponownie wpisaæ nazwisko pracownika: ";
				cin >> this->surname;
			}
		}
	}
	std::cout << std::endl << "Podaj PESEL pracownika";
	std::cin >> this->pesel;
	if (checkPesel() == false)
	{
		while (checkPesel()==false)
		{
			{
				cout << endl << "W twoim zapisie wkrad³e siê b³¹d, spróbuj ponownie wpisaæ PESEL pracownika: ";
				cin >> this->pesel;
			}
		}
	}
	peselToBirth(this->pesel);
	cin.clear();
}
std::string Worker::getBirth()
{
	return this->birthdate;
}
std::string Worker::getName()
{
	return this->name;
}
std::string Worker::getSurname()
{
	return this->surname;
}
string Worker::getPesel()
{
	return this->pesel;
}
void Worker::peselToBirth(string pesel)
{
	std::string year;
	std::string month;
	std::string day;
	year = pesel;
	year.erase(year.begin()+2, year.end());
	month = pesel;
	month.erase(month.begin(),month.begin()+4);
	month.erase(month.begin()+2, month.end());
	day = pesel;
	day.erase(day.begin(),day.begin()+2);
	day.erase(day.begin()+2, day.end());
	this->birthdate= day + "." + month + "." + year+"r";

}
bool Worker::checkName()
{
	
	for (auto i = 0; i < this->name.size(); i++)
	{
		if (name[i] == '0' || name[i] == '1'||name[i]=='2'||name[i]=='3'||name[i]=='4'||name[i]=='5'||name[i]=='6'||name[i]=='7'||name[i]=='8'||name[i]=='9')
		{
			return false;
		}
		else 
		{
			return true;
		}
	}
}
bool Worker::checkSurname()
{
	for (auto i = 0; i < this->surname.size(); i++)
	{
		if (name[i] == '0' || name[i] == '1' || name[i] == '2' || name[i] == '3' || name[i] == '4' || name[i] == '5' || name[i] == '6' || name[i] == '7' || name[i] == '8' || name[i] == '9')
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
bool Worker::checkPesel()
{
	if (this->pesel.size() != 11) return false;

	for (auto i = 0; i < this->pesel.size(); i++)
	{
		if (pesel[i] < 48 || pesel[i]>57)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
