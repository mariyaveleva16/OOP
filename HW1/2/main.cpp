#include "Header.h" 

int main()
{
	int* some_number = new int(5);
	IntCounter first(some_number);
	std::cout << first.get_count() << std::endl;
	IntCounter second = first;
	std::cout << first.get_count() << std::endl;

	{
		IntCounter third(second);
		std::cout << first.get_count() << std::endl;
	}
	std::cout << first.get_count() << std::endl;

	/*int* some_number = new int(5);
	Intcounter first(some_number);

	int* some_other_number = new int(7);
	Intcounter second(some_other_number);

	std::cout << first.get_count() << std::endl;
	std::cout << second.get_count() << std::endl;
	*/
	return 0;
}
