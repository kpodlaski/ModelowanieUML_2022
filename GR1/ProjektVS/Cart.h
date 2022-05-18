#pragma once
#include <list>
#include "Product.h"


using namespace std;

class Cart
{
	public:
		void add_product(Product* p);
		list<Product*> products;
};

