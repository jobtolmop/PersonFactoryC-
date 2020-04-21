#include "Product.h"


Product::Product(std::string aName, int aCost, std::string aArcana)
{
	name = aName;
	cost = aCost;
	arcana = aArcana;
}

Product::~Product()
{

}

int Product::GetCost()
{
	return cost;
}

std::string Product::GetName()
{
	return name;
}

std::string Product::GetArcana()
{
	return arcana;
}
