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
	string getBirth();
	string getName();
	string getSurname();
	string getPesel();

	void setName(string name);
	void setPesel(string pesel);
	void setSurname(string surname);
	void setBirth(string birth);

private:
	string name;
	string surname;
	string pesel;
	string birthdate;

	void peselToBirth(string pesel);

	bool checkName();
	bool checkSurname();
	bool checkPesel();
};

