#pragma once
#include"Food.h"
#include "Drink.h"
#include <vector>

class Shop
{
public:
	Shop();
	void addProduct(Product*);
	void removeProduct(std::string searchedcode);
	void price_less(double newprice);
	void search(std::string newcode);
	void print();
private:
	std::vector<Product*> shop;
};