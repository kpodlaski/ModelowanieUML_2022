#pragma once
#include "Person.h"


class Employee :
    public Person
{
    public: 
        string pesel;
        Employee(string _pesel, string _name, 
            string _surname, string _email, string _passwd);
};

