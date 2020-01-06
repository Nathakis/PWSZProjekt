#pragma once
#include <iostream>
class Worker
{
public:
	Worker();
	~Worker();
	void addWorker();
	std::string getBirth();
	std::string getName();
	std::string getSurname();
	int getPesel();
private:
	std::string name;
	std::string surname;
	int pesel;
	std::string birthdate;
	void peselToBirth();
};

