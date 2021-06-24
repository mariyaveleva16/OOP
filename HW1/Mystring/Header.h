#pragma once
#include<iostream>
#include<cstring>

class MyString
{
	char* str;
	int len;
public:
	MyString();
	~MyString();
	MyString(const char*);
	MyString(const MyString&);
	MyString& operator=(const MyString&);
	bool operator==(const MyString&);
	bool operator>(const MyString&);
	bool operator<(const MyString&);
	bool operator!=(const MyString&);
	void append(char);
	void print();
};
