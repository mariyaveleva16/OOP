#include "Header.h"
#include <iostream>

int main()
{
	double* some_number = new double(5.6);
	IntCounter<double> first(some_number);
	std::cout << first.get_count() << std::endl;
	IntCounter<double> second = first;
	std::cout << first.get_count() << std::endl;

	{
		IntCounter<double> third(second);
		std::cout << first.get_count() << std::endl;
	}
	std::cout << first.get_count() << std::endl;
	/*int* some_number1 = new int(5);
	IntCounter<int> first(some_number1);

	int* some_other_number1 = new int(7);
	IntCounter<int> second(some_other_number1);

	std::cout << first.get_count() << std::endl;
	std::cout << second.get_count() << std::endl;*/
	return 0;
}
