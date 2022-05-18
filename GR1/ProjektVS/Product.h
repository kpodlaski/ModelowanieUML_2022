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
		//int* image; //Tablica bajtów zawieraj¹ca obrazek
		string image; //Œcie¿ka dostêpu do obrazka
};

