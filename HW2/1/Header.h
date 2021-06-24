#pragma once
#include<cstring>
#include<iostream>
class MyString {
private:
    char* content;
public:
    MyString();
    MyString(const char* input);

    MyString(const MyString& from);

    MyString& operator=(const MyString& from);

    ~MyString();

    void append(char* to_append);
    void print();
    friend std::ostream& operator <<(std::ostream& os, const MyString& c);
    friend std::istream& operator >>(std::istream& os, MyString& c);
};

