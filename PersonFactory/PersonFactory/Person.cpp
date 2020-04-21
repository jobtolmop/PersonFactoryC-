#include "Person.h"


Person::Person(int someMoney)
{
	money = someMoney;
}

Person::~Person()
{
}

void Person::SetMoney(int someMoney)
{
	money = someMoney;
}

int Person::GetMoney()
{
	return money;
}
