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

