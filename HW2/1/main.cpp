#include "Header.h"

int main()
{
	MyString temp1("Hello world");
	//temp1.print();
	char add;
	std::cin >> add;
	std::cout << temp1;
	temp1.append(add);
	//temp1.print();
	std::cout << temp1;
	return 0;
}
