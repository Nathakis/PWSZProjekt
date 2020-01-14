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
	std::cout << std::endl << "Podaj nazwisko pracownika: ";
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
	std::cout << std::endl << "Podaj PESEL pracownika: ";
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
	day = pesel;
	day.erase(day.begin(),day.begin()+4);
	day.erase(day.begin()+2, day.end());
	month = pesel;
	month.erase(month.begin(),month.begin()+2);
	month.erase(month.begin()+2, month.end());
	this->birthdate= day + "." + month + "." + year+"r";

}
bool Worker::checkName()
{
	this->name[0] = toupper(this->name[0]);
	for (auto i = 1; i < this->name.length(); i++)
	{
		this->name[i] = tolower(this->name[i]);
	}

	for (auto i = 0; i < this->name.length(); i++)
	{
		if (this->name[i] < 65 || (this->name[i] > 90 && this->name[i] < 97) || this->name[i]>122)
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
	this->surname[0] = toupper(this->surname[0]);
	for (auto i = 1; i < this->surname.length(); i++)
	{
		this->surname[i] = tolower(this->surname[i]);
	}

	for (auto i = 0; i < this->surname.length(); i++)
	{
		if (this->surname[i] < 65 || (this->surname[i] > 90 && this->surname[i] < 97) || this->surname[i]>122)
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


void Worker::setName(string name)
{
	this->name = name;
}
void Worker::setPesel(string pesel)
{
	this->pesel = pesel;
}
void Worker::setSurname(string surname)
{
	this->surname = surname;
}
void Worker::setBirth(string birth)
{
	this->birthdate = birth;
}