#pragma once
#include <string>
#include "Category.h"

using namespace std;

class Product
{
	public:
		double price;
		int vat_category;
		Category* category;
		string description;
		//int* image; //Tablica bajt�w zawieraj�ca obrazek
		string image; //�cie�ka dost�pu do obrazka
};

