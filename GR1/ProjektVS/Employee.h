#pragma once
#include "Person.h"

using namespace std;
class Employee : public Person
{
	public:
		Employee(string _name, string _surname, string _email, string _password,
			string _pesel);
	
		string pesel;
		void prepare_delivery(int id_transaction);
};

