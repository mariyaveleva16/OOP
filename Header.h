#pragma once
#include<iostream>

class IntCounter
{
    static int count;
    int* arr;
    int size;
public:
    IntCounter(int*);
    ~IntCounter();
    IntCounter(const IntCounter&);
    IntCounter& operator=(const IntCounter&);
    int get_count();
};
