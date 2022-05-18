#pragma once
#include <string>
#include "Product.h"

using namespace std;
class ProductDAO
{
	public:
		virtual Product* select_products(string query)=0;
		virtual void update_product(Product* p)=0;
		virtual void insert_product(Product* p)=0;
		virtual void delete_product(Product* p)=0;
};

