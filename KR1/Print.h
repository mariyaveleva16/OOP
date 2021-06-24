#pragma once
#include<iostream>

class Date {
private:
	int day;
	int mounth;
	int year;

public:
    Date() {
        day = 0;
        mounth = 0;
        year = 0;
    };
    Date(int d,int m , int y){
        day = d;
        mounth = m;
        year = y;
    };

    Date(const Date& other) {
        this->day = other.day;
        this->mounth= other.mounth;
        this->year = other.year;
    };

    Date& operator=(const Date& other) {
        if (this != &other) {
            this->day = other.day;
            this->mounth = other.mounth;
            this->year = other.year;
        }
        return *this;
    };

    ~Date() {};
    void print() {
        std::cout << day << "." << mounth << "." << year;
    };

};

class PrintEdition:Date {
private:
    char* name;
    int number_of_sheets;
    Date date;

public:
    PrintEdition() {
        name = new char[1];
        name[0] = '\0';
        number_of_sheets= 0;
        
    };
    PrintEdition(const char* _name, int _number_of_sheets, Date _date) {
        int len = strlen(_name);
        this->name = new char[len + 1];
        strcpy_s(this->name, len + 1, _name);
        this->name[len] = '\0';

        this->number_of_sheets = _number_of_sheets;

        date = _date;

    };

    PrintEdition(const PrintEdition& other) {
        int len = strlen(other.name);
        this->name = new char[len + 1];
        strcpy_s(this->name, len + 1, other.name);
        this->name[len] = '\0';

        this->number_of_sheets = other.number_of_sheets;

        this->date = other.date;
    };

    PrintEdition& operator=(const PrintEdition& other) {
        if (this != &other) {
            delete[] this->name;
            int len = strlen(other.name);
            this->name = new char[len + 1];
            strcpy_s(this->name, len + 1, other.name);
            this->name[len] = '\0';

            this->number_of_sheets = other.number_of_sheets;

            this->date = other.date;
        }
        return *this;
    };

    ~PrintEdition() {
        delete[] this->name;
    };
    void print() {
        std::cout << name << std::endl;
        std::cout << number_of_sheets << std::endl;
        date.print();
    };
    
};

class Article {
private:
    PrintEdition edition;
    char* name_author;
public:
    Article() {
        name_author = new char[1];
        name_author[0] = '\0';
    };
    Article(PrintEdition _edition,const char*_name ) {
        edition = _edition;
        int len = strlen(_name);
        this->name_author = new char[len + 1];
        strcpy_s(this->name_author, len + 1, _name);
        this->name_author[len] = '\0';

    };

    Article(const Article& other) {
        this->edition = other.edition;
        int len = strlen(other.name_author);
        this->name_author = new char[len + 1];
        strcpy_s(this->name_author, len + 1, other.name_author);
        this->name_author[len] = '\0';

    };

    Article& operator=(const Article& other) {
        if (this != &other) {

            delete[] this->name_author;

            this->edition = other.edition;
            int len = strlen(other.name_author);
            this->name_author = new char[len + 1];
            strcpy_s(this->name_author, len + 1, other.name_author);
            this->name_author[len] = '\0';
        }
        return *this;
    };

    ~Article() {
        delete[] this->name_author;
    };
    void print() {
        edition.print();
        std::cout << name_author << std::endl;
    };

    class Message {
        char* mess;
        char* sender;
    public:
        const char* getmess() const
        {
            return mess;
        }
        const char* getsender() const
        {
            return sender;
        }
        void print_sender() {
            std::cout << sender;
        }

        void print_mess() {
            std::cout << mess;
        }
    };

};
