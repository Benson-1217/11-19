#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

/*Person::Person(const string id, const string lastname, const string firstname, const string gender,
	const string birthDate) {
	this->id = id;
	this->lastname = lastname;
	this->firstname = firstname;
	this->gender = gender;
	this->birthDate = birthDate;
	

}*/
Person::Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate) : id(id), lastname(lastName), firstname(firstName), gender(gender), birthDate(birthDate)
{
}
Person::Person()
{
}


string Person :: getid() const
{
	
	return id;

}
string Person::getlastname() const
{
	return lastname;

}
string Person::getfirstname() const
{
	return firstname;

}
string Person::getgender() const
{
	return gender;

	 
}
string Person::getbirthDate() const
{
	return birthDate;


}
void Person::setId(const string& id)
{
	this->id = id;
}

void Person::setLastName(const string& lastName)
{
	this->lastname = lastName;
}

void Person::setFirstName(const string& firstName)
{
	this->firstname = firstName;
}

void Person::setGender(const string& gender)
{
	this->gender = gender;
}

void Person::setBirthDate(const string& birthDate)
{
	this->birthDate = birthDate;
}

void Person::display() const
{
	cout << "id: " << id << endl;
	cout << "姓: " << lastname << endl;
	cout << "名: " << firstname << endl;
	cout << "性別: " << gender << endl;
	cout << "生日: " << birthDate << endl;
}

