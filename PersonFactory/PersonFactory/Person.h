#pragma once
class Person
{
public:

	Person(int someMoney);
	~Person();

	void SetMoney(int someMoney);
	int GetMoney();

private:

	int money;

};