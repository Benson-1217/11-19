#include <iostream>
#include"Person.h"
//#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Utility.h"
#include "ConsoleApplication1.h"

using namespace std;


int main()
{
 /* Person person1("B123456789", "Wu", "bing-rui", "M", "2005-12-17");

	Person* person2 = new Person();
	person2->setId("A987654321");
	person2->setLastName("Wang");
	person2->setFirstName("David");
	person2->setGender("M");
	person2->setBirthDate("2007-04-09");

	person1.display();
	cout << endl;
	person2->display();*/
	Student student1("A123456789", "陳", "小明", "男", "1999-01-01", "S001", Department::ComputerSciece, ClassName::_1A);
	student1.display();

	cout << endl;
	Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	Course course3("C003", "Python Programming", "這門課程教授Python程式語言");
	//course1.display();
	//course2.display();
	//course3.display();

	vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("B123456789", "吳", "秉叡", "男", "2005-12-17", "T001", Department::ComputerSciece, ClassName::_1A, teacher1_courses);

	cout << "----------------" << endl;
	teacher1.display();

}

 