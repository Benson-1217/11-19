#include "Person.h"
#include <string>
using namespace std;

Person::Person(const string& id, const string& lastname, 
	const string& firstname, const string& gender, const string& birthDate)
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

