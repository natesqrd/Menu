#include <iostream>
#include "Integer.h"
using namespace std;
int Integer::toInt()
{
    return this->Int;
}
void Integer::equals(int i)
{
    this->Int = i;
}
int Integer::add(Integer i)
{
    return this->Int + i.Int;
}
int Integer::sub(Integer i)
{
    return this->Int - i.Int;
}
int Integer::mul(Integer i)
{
    return this->Int * i.Int;
}
int Integer::div(Integer i)
{
    return this->Int / i.Int;
}

//Assignment 3 added###################

//Overloaded Functions
int Integer::add(int i)
{
    return this->Int + i;
}
int Integer::sub(int i)
{
    return this->Int - i;
}
int Integer::mul(int i)
{
    return this->Int * i;
}
int Integer::div(int i)
{
    return this->Int / i;
}

//Constructors
Integer::Integer()
{
    this->Int = 0;
}
Integer::Integer(Integer &i)
{
    this->Int = i.Int;
}
Integer::Integer(int i)
{
    this->Int = i;
}
//######################################
