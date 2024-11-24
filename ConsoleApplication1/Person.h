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

	
	Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate);
	Person();
	//Gettter
	string getid()const;
	string getlastname()const;
	string getfirstname()const;
	string getgender()const;
	string getbirthDate()const;
	//Setter
	void setId(const string& id);
	void setLastName(const string& lastName);
	void setFirstName(const string& firstName);
	void setGender(const string& gender);
	void setBirthDate(const string& birthDate);

	void display() const;
		 
};

