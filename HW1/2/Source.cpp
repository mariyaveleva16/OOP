#include "Header.h"
int IntCounter::count = 0;
IntCounter::IntCounter(int* a)
{
	size = sizeof(a) / sizeof(a[0]);
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = a[i];
	}
	count = 1;
}
IntCounter::~IntCounter()
{
	count--;
	if (count == 0)delete[]arr;
}
IntCounter::IntCounter(const IntCounter& other)
{
	size = other.size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
	count++;
}
IntCounter& IntCounter::operator=(const IntCounter& other)
{
	if (this != &other)
	{
		delete[]arr;
		size = other.size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}
	return *this;
}
int IntCounter::get_count()
{
	return count;
}