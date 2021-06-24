#pragma once
#include "Hero.h"
#include "Magic.h"

class Special : virtual public Hero, virtual public Magic//virtual public!!!
{
public:
	Special ();
	Special(std::string name, unsigned cardNum, unsigned imgNum, unsigned attack, unsigned deffence, std::string effet, unsigned level);
	virtual std::string getType() const override;
	virtual void print()override;
	virtual ~Special()=default;
private:
	unsigned level;
};

Special::Special() :Card(), Hero(), Magic(),level(0)
{};
Special::Special(std::string name, unsigned cardNum, unsigned imgNum, unsigned attack, unsigned deffence, std::string effet, unsigned level) :
	Card(name, cardNum, imgNum), Hero(name, cardNum, imgNum, attack, deffence),
	Magic(name, cardNum, imgNum, effet), level(level)
{};
void Special:: print()
{
	Card::print();
	std::cout << "Attack power: " << this->attack << std::endl;
	std::cout << "Deffence power: " << this->deffence << std::endl;
	std::cout << "Magic effect: " << this->effet << std::endl;
	std::cout << "Level: " << this->level << std::endl;
}
std::string Special:: getType() const
{
	return "Special";
}