#pragma once
#include "Transport.h"
enum carOwner { NOowner = 0, privateCar = 1, firmCar = 2 };
class Car:virtual public Transport
{
public:
	Car();
	Car(std::string, std::string, unsigned, std::string, prHeigh, carOwner);
	virtual std::string getType()const override;
	virtual void print()override;
	virtual ~Car()=default;
private:
	carOwner owner;
};

Car::Car():Transport(), owner(NOowner)
{
}
Car::Car(std::string mark, std::string model, unsigned year, std::string problem, prHeigh heigh, carOwner owner)
	: Transport(mark, model, year, problem, heigh), owner(owner)
{
};
std::string Car::getType()const
{
	return "Car";
}
void Car::print()
{
	Transport::print();
	if(this->owner==1) std::cout << "Car owner: Private" << std::endl;
	if(this->owner == 2) std::cout << "Car owner: Firm car" << std::endl;
}
