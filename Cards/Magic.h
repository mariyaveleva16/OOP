#pragma once
#include "Card.h"

class Magic : virtual public Card
{
public:
	Magic();
	Magic(std::string name, unsigned cardNum, unsigned imgNum, std::string effet);
	virtual std::string getType() const override;
	virtual void print()override;
	virtual ~Magic() = default;

protected:
	std::string effet;
};

Magic::Magic() : Card(), effet("No effect")
{};
Magic::Magic(std::string name, unsigned cardNum, unsigned imgNum, std::string effet) :
	Card(name, cardNum, imgNum),effet(effet)
{};
void Magic::print()
{
	Card::print();
	std::cout << "Magic effect: " << effet << std::endl;
}
std::string Magic::getType() const {
	return "Magic";
}