#include <string>
class Product
{
public:

	Product(std::string aName, int aCost, std::string aArcana);
	~Product();

	int GetCost();
	std::string GetName();
	std::string GetArcana();

private:

	std::string name;
	int cost;
	std::string arcana;

};