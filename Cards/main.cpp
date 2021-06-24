#include "Pack.h"
using namespace std;
int main()
{
	Pack p;
	Card* a;
	Special sp("frge", 7,7,9,7,"hy",8);
	a = &sp;
	p.addCard(a);
	Hero h("fd", 2,3,4,5);
	a = &h;
	p.addCard(a);
	Magic mag("fr", 4,6,"rr");
	a = &mag;
	p.addCard(a);
	p.print();
	return 0;
}
