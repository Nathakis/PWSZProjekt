#include "Worker.h"
Worker::Worker()
{
	this->birthdate = "";
	this->pesel = NULL;
	this->name = "";
	this->surname = "";

}

void Worker::addWorker()
{
	std::cout << "Podaj Imiê pracownika: ";
	std::cin >> this->name;
	std::cout << std::endl << "Podaj nazwisko pracownika";
	std::cin >> this->surname;
	std::cout << std::endl << "Podaj PESEL pracownika";
	std::cin >> this->pesel;
	this->birthdate = peselToBirth(this->pesel);

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
int Worker::getPesel()
{
	return this->pesel;
}
std::string Worker::peselToBirth(int pesel)
{
	std::string year;
	std::string month;
	std::string day;
	year = std::to_string(pesel);
	year.erase(year.begin()+2, year.end());
	month = to_string(pesel);
	month.erase(0, 2);
	month.erase(month.begin()+4, day.end());
	day = to_string(pesel);
	day.erase(0, 4);
	day.erase(day.begin()+6, day.end());
	return day + "." + month + "." + year+"r";

}