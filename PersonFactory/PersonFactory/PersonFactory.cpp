#include "Product.h"
#include "Person.h"
#include <list>
#include <iostream>


void StartProgram()
{
	std::list<Product>boughtPersonas;
	std::list<Product>personasToBuy;

	personasToBuy.push_back(Product("BudgetArsene", 100, "Chariot"));
	personasToBuy.push_back(Product("Arsene", 840, "Fool"));

	Person Job(8200);

	while (true)
	{
		bool productFound = false;

		std::cout << "You Have: " << Job.GetMoney() << " Money\nPlease Enter The Name Of The Item You Wish To Buy\n\nCart(This Shows What You've Bought)\nMake(Make a new Persona)\n\n";

		for (Product it : personasToBuy)
		{
			std::cout << it.GetName() << ", " << it.GetArcana() << ", " << it.GetCost() << " money\n";
		}

		std::string input;

		std::cin >> input;

		std::cout << "\n";

		for (Product it : personasToBuy)
		{
			if (it.GetName() == input)
			{
				if (Job.GetMoney() >= it.GetCost())
				{
					Job.SetMoney(Job.GetMoney() - it.GetCost());
					boughtPersonas.push_back(it);
					std::cout << "You Bought " << it.GetName() << "\n";
				}
				else
				{
					std::cout << "You Don't Have Enough Money\n";
					break;
				}
				productFound = true;
			}
		}

		if (input == "Cart")
		{
			for (Product it : boughtPersonas)
			{
				std::cout << it.GetName() << ", " << it.GetArcana() << ", " << it.GetCost() << " money\n";
			}
			productFound = true;
		}
		else if (input == "Make")
		{
			std::string name;
			int cost;
			std::string arcana;
			std::cout << "Type Name:\n";
			std::cin >> name;
			std::cout << "Type Cost:\n";
			std::cin >> cost;
			std::cout << "Type Arcana:\n";
			std::cin >> arcana;

			personasToBuy.push_back(Product(name, cost, arcana));

			std::cout << "You Made A New Persona!\n";
		}

		if (!productFound)
		{
			std::cout << "Please Check Your Spelling\n";
		}
		else
		{
			if (boughtPersonas.empty())
			{
				std::cout << "Your Cart Is Empty\n";
			}
		}

		std::cout << "\n";
	}
}

int main()
{
	StartProgram();
}
