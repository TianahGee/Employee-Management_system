
#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	cout << "This is the constructor" << endl;
	name = ("");
	department =("");
	position = ("");
	idNumber = 0;
}
//------------------------------------------
Employee::~Employee()
{
	cout << "This is the destructor" << endl;
}
//------------------------------------------
void Employee::setName(string n)
{
	name = n;	//when using char strcpy(name, 31)
}
//------------------------------------------
void Employee::setIdNumber(int id)
{
	idNumber =id;
}
//------------------------------------------
void Employee::setDepartment(string d)
{
	department = d;
}
//------------------------------------------
void Employee::setPosition(string p)
{
	position = p;
}
//------------------------------------------
string Employee::getName()
{
	return name;
}
//------------------------------------------
int Employee::getID()
{
	return idNumber;
}
//------------------------------------------
string Employee::getDepartment()
{
	return department;
}
//------------------------------------------
string Employee::getPosition()
{
	return position;
}
//------------------------------------------
void Employee::displayEmployee()
{
	cout <<endl << "Name: " << name << endl;
	cout << endl <<  "ID: " << idNumber << endl;
	cout << endl << "Department: " <<  department << endl;
	cout << endl<< "Position: " << position << endl;
}