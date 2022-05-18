#include "Employee.h"

Employee::Employee(string _pesel, 
	string _name, string _surname, 
	string _email, string _passwd):Person(_name,_surname,_email,_passwd)
{
	this->pesel = pesel;
}
