#include "Header.h"
int main()
{
	int a;
	std::cout << "Enter how many rectangles you want to have in the list: ";
	std::cin >> a;
	double b;
	double* arr;
	arr = new double[a + 1];
	double max = -1;
	int index = 0;
	for (int i = 0; i < a; i++)
	{
		Point p; Point q;
		p.read();
		std::cout << "Rectangle " << i << " p";
		p.print();
		std::cout << std::endl;
		q.read();
		std::cout << "Rectangle " << i << " q";
		q.print();
		std::cout << std::endl;
		b = p.s(q);
		arr[i] = b;
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	std::cout << "Index=" << index;

	return 0;
}
