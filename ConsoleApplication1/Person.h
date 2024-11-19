#pragma once
#include<string>
using namespace std;
class Person
{
private:
	string id;
	string lastname;
	string firstname;
	string gender;
	string birthDate;
public:
	//Constructor , 建構子, 建構函數
	Person(const string& id, const string& , const string&  lastname,
		const string& firstname, const string& gender, const string& birthDate);
	//Gettter
	string getid()const;
	string getlastname()const;
	string getfirstname()const;
	string getgender()const;
	string getbirthDate()const;
	//Setter

		 
};

