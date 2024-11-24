#include <iostream>
#include"Person.h"

using namespace std;


int main()
{
    Person person1("B123456789", "Wu", "bing-rui", "M", "2005-12-17");

	Person* person2 = new Person();
	person2->setId("A987654321");
	person2->setLastName("Wang");
	person2->setFirstName("David");
	person2->setGender("M");
	person2->setBirthDate("2007-04-09");

	person1.display();
	cout << endl;
	person2->display();
}

 