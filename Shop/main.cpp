#include "Shop.h"

int main()
{
	Shop s;
	Food one("Burger", "123aa", 3.5, 450);
	s.addProduct(&one);
	Food two;
	two.setName("Pizza");
	two.setCode("45b");
	two.setPrice(1.9);
	two.setKalories(200);
	//std::cout << two.getName() << std::endl;
	s.addProduct(&two);
	Drink three("Cola", "76t", 1.5, 0);
	s.addProduct(&three);
	Drink four("Vodka", "y7t", 7.9, 35);
	s.addProduct(&four);
	s.removeProduct("123aa");
	s.price_less(5);
	s.search("y7t");
	s.print();
}
