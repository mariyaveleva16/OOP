#pragma once
#include "Transport.h"

class Bus :virtual public Transport
{
public:
	Bus();
	Bus(std::string, std::string, unsigned, std::string, prHeigh, bool);
	virtual std::string getType()const override;
	virtual void print()override;
	virtual ~Bus() = default;

private:
	bool passengers;
};

Bus::Bus() :Transport(), passengers(0)
{
}
Bus::Bus(std::string mark, std::string model, unsigned year, std::string problem, prHeigh heigh, bool passengers)
	: Transport(mark, model, year, problem, heigh), passengers(passengers)
{
};
std::string Bus::getType()const
{
	return "Bus";
}
void Bus::print()
{
	Transport::print();
	if (this->passengers == 0) std::cout << "Passengers: No" << std::endl;
	else std::cout << "Passengers: Yes" << std::endl;
}