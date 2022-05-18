#pragma once
#include <string>

using namespace std;
class Person
{
	public:
		string name;
		string surname;
		string email;
		string password;
		Person(string _name, string _surname,
			string _email, string _password);
};

