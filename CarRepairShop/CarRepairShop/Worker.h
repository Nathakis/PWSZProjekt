#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker
{
public:
	Worker();
	~Worker()=default;
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
	std::string peselToBirth(int pesel);
};

