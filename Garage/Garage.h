#pragma once
#include"Car.h"
#include "Bus.h"
#include <vector>
//metod za vuvejdane za novo prevozno sredstvo
class Garage
{
public:
	Garage();
	void add_car(Transport*);
	void print();
private:
	int sum = 0;
	std::vector<Transport*> garage;
};
Garage::Garage() :garage(std::vector<Transport*>()), sum(0)
{};
void Garage::add_car(Transport* newtransport)
{
	if (sum + (newtransport->getProblem()) <= 10)
	{
		this->garage.push_back(newtransport);
		sum = sum + newtransport->getProblem();
	}
};
void Garage::print()
{
	for (size_t i = 0; i < garage.size(); i++)
	{
		this->garage[i]->print();
	}
	if (sum == 10)
	{
		std::cout << "No more space for the next car/s" << std::endl;
	}
};
