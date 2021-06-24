#include "Header.h"

MyString::MyString()
{
	len = 0;
	str = new char[0];
}
MyString::~MyString()
{
	delete[]str;
}
MyString::MyString(const char* a)
{
	char j;
	while (j = a[len] != '\n')
	{
		len++;
		j = a[len - 1];
	}
	str = new char[len];
	for (int i = 0; i < len; i++)
	{
		str[i] = a[i];
	}
}
MyString::MyString(const MyString& other)
{
	len = other.len;
	str = new char[len];
	for (int i = 0; i < len; i++)
	{
		str[i] = other.str[i];
	}
}
MyString& MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		delete[]str;
		len = other.len;
		for (int i = 0; i < len; i++)
		{
			str[i] = other.str[i];
		}
	}
	return *this;
}
bool MyString::operator==(const MyString& other)
{
	if (this == &other)return 1;
	return 0;
}
bool MyString::operator!=(const MyString& other)
{
	if (this != &other)return 1;
	return 0;
}
bool MyString::operator>(const MyString& other)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] > other.str[i])return 1;
	}
	return 0;
}
bool MyString::operator<(const MyString& other)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] > other.str[i])return 1;
	}
	return 0;
}
void MyString::append(char a)
{
	len++;
	char* temp = new char[len];
	for (int i = 0; i < len - 1; i++)
	{
		temp[i] = str[i];
	}
	temp[len - 1] = a;
	delete[]str;
	str = new char[len];
	for (int i = 0; i < len; i++)
	{
		str[i] = temp[i];
	}
	//std::cout << str[len - 1]; вижте ,че ми запаметява '!' , но принт функцията не желае да ми я принтира :) 
	delete[]temp;
}
void MyString::print()
{
	std::cout << str <<std:: endl; // но тук ако напишем и '<< str[len-1]' ще ми изпише и '!' 
}