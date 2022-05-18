#pragma once
#include <string>

using namespace std; 

class Category
{
	public:
		string name;
		Category* parent;
		Category();
		~Category();


};

