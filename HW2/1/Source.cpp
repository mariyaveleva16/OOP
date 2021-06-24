#include "Header.h"
MyString::MyString()
{
    content = new char[1];
    content[0] = '\0';
}

MyString::MyString(const char* input)
{
    int len = strlen(input);
    this->content = new char[len + 1];

    strcpy_s(this->content, len + 1, input);
    this->content[len] = '\0';
}
MyString::MyString(const MyString& from)
{
    int len = strlen(from.content);
    this->content = new char[len + 1];
    strcpy_s(this->content, len + 1, from.content);
    this->content[len] = '\0';
}

MyString& MyString::operator=(const MyString& from)
{
    if (this != &from)
    {
        delete[] content;

        int len = strlen(from.content);
        this->content = new char[len + 1];
        strcpy_s(this->content, len + 1, from.content);
        this->content[len] = '\0';
    }
    return *this;
}

MyString::~MyString()
{
    delete[] this->content;
}

void MyString::append(char* to_append)
{
    int len = strlen(this->content);
    int len1 = 0;
    int i = 0;
    while (to_append[i] != '\0')
    {
        len1++;
        i++;
    }
    char* new_content = new char[len + len1+1];
    strcpy_s(new_content, len + len1, this->content);
    int t = len;
    int j = 0;
    while (t != len + len1)
    {
        new_content[len] = to_append[j];
        len++; j++;
    }
    new_content[len + len1 + 1] = '\0';
    delete[] this->content;
    this->content = new_content;
}
/*
void MyString::print()
{
    std::cout << this->content << std::endl;
}*/
std::ostream& operator <<(std::ostream& out, const MyString& c)
{
    out << c.content <<std:: endl;
    return out;
}

std::istream& operator >>(std::istream& is, MyString& c)
{
    int i = 0;
    while (c.content[i] != '/n')

    {
        is >> c.content[i];
        i++;
    }
    return is;
}
