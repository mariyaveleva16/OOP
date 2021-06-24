#include "Store.h"

int main()
{
	Store p;
	StoreItem* a;
	Fruit sp(fruit, 45, 2.5,"Apple", "red" );
	Fruit pea(fruit, 87, 2.8, "Pear", "yellow");
	a = &sp;
	p.add_storeItem(a);
	a = &pea;
	p.add_storeItem(a);
	Vegetable vg(vegetable, 55, 9.6, "Luk", "trt");
	a = &vg;
	p.add_storeItem(a);
	Vegetable tr;
	Vegetable vg1(vegetable, 57, 9.8, "Lukk", "trt");
	p.change_price(1, 3.8);
	p.change_name(1, "Kratavica");
	a = &vg1;
	p.add_storeItem(a);
	p.print();
	std::cout<<operator>(sp, pea)<<std::endl;
	std::cout << operator==(vg, vg1)<<std::endl;
	return 0;
}
