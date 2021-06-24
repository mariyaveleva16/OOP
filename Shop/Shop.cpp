#include "Shop.h"

Shop::Shop() : shop(std::vector<Product*>())
{}
void Shop::addProduct(Product* newproduct)
{
	shop.push_back(newproduct);
}
void Shop::removeProduct(std::string searchedcode)
{
	int a = 0;
	for (size_t i = 0; i < shop.size(); i++)
	{
		if (searchedcode == shop[i]->getCode())
		{
			shop.erase(shop.begin() + i);
			a = 1;
		}
	}
	if (a == 0) std::cout << "There is no product whit this code!" << std::endl;
}
void Shop::price_less(double newprice)
{
	int a = 0;
	std::cout << "Products with price less than: " << newprice << std::endl;
	for (size_t i = 0; i < shop.size(); i++)
	{
		if (newprice > shop[i]->getPrice())
		{
			this->shop[i]->print();
			a = 1;
		}
	}
	if (a == 0) std::cout << "There are no products whit price less than " << newprice << std::endl;
}
void Shop::search(std::string newcode)
{
	int a = 0;
	std::cout << "Product with code: " << newcode << std::endl;
	for (size_t i = 0; i < shop.size(); i++)
	{
		if (newcode == shop[i]->getCode())
		{
			this->shop[i]->print();
			a = 1;
		}
	}
	if (a == 0) std::cout << "There is no product whit code: " << newcode << std::endl;
}
void Shop::print()
{
	std::cout << "All products in the shop: " << std::endl;
	for (size_t i = 0; i < shop.size(); i++)
	{
		this->shop[i]->print();
	}
}