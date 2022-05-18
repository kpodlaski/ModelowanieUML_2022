#pragma once
#include <string>

using namespace std;
class Category
{
	public:
		string name;
		string description;
		Category* parent;
};

