#pragma once
#include <string>
#include "Category.h"

using namespace std;
class Product
{
	public:
		int vat_category; //Stawka vat, 0, 8, 12, 23,.... 
		double price;
		string description;
		string image; //�cie�ka do pliku
		//int[] image; //Tablica bajt�w
		Category* category;
};

