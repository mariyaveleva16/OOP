#pragma once
#include "Special.h"
#include <vector>
class Pack
{
public:
	Pack();
	void addCard(Card*);
	void print();
private:
	std::vector<Card*> cards;
};

Pack::Pack():cards(std::vector<Card*>())
{
};
void Pack::addCard(Card* newCard)
{
	this->cards.push_back(newCard);
};
void Pack::print()
{
	for(size_t i=0; i < this->cards.size(); i++)
	{ 
		this->cards[i]->print();
	}
};