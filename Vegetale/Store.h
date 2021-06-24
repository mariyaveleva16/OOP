#pragma once
#include"Fruit.h"
#include"Vegetable.h"
#include<vector>

class Store
{
public:
	Store();
	void add_storeItem(StoreItem*);
	void remove_storeItem(int e);
	void change_price(int ind, double newprice);//?
	void change_name(int ind, std::string newname);//?
	void lessKalories();//??
	void print();
private:
	std::vector<StoreItem*> store;
};
Store::Store():store(std::vector<StoreItem*>())
{}
void Store::add_storeItem(StoreItem* newitem)
{
	this->store.push_back(newitem);
}
void Store::remove_storeItem(int e)
{
	store.erase(store.begin() + e);
}
void Store:: change_price(int ind, double newprice)
{
	store[ind]->setPrice(newprice);
}
/*
template <class ForwardIterator, class T>
void replace(ForwardIterator first, ForwardIterator last,
	 T& old_value, T& new_value)
{
	while (first != last) {
		if (first.getName() == old_value) *first = new_value;
		++first;
	}
}*/
void Store::change_name(int ind, std::string newname)
{
	std::string a = store[ind]->getName();
	replace(store.begin(), store.end(), a, newname);
}
void Store::print()
{
	for (size_t i = 0; i < this->store.size(); i++)
	{
		this->store[i]->print();
	}
}