#include "Garage.h"

int main()
{
	Garage g;
	Transport* t;
	Car c("Reno", "Senic", 2008, "DWSDW", Low, firmCar);
	t = &c;
	g.add_car(t);
	Bus b("Mercedes", "dedde", 2002, "yhgrfdes", High, 1);
	t = &b;
	g.add_car(t);
	Car p("Opel", "Astra", 2004, "dwdwf", Medium, privateCar);
	t = &p;
	g.add_car(t);
	Bus r("Fiat", "gre", 2001, "ferfgre", High, 0);
	t = &r;
	g.add_car(t);
	Car u;
	std::cin >> u;
	t = &u;
	g.add_car(t);
	g.print();
	return 0;
}
