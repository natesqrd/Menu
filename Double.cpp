#include <iostream>
#include "Double.h"
using namespace std;
double Double::toDouble()
{
    return this->doub;
}
void Double::equals(double d)
{
    this->doub = d;
}
double Double::add(Double d)
{
    return this->doub + d.doub;
}
double Double::sub(Double d)
{
    return this->doub - d.doub;
}
double Double::mul(Double d)
{
    return this->doub * d.doub;
}
double Double::div(Double d)
{
    return this->doub / d.doub;
}

//Assignment 3 added
//Overloaded Functions x/ doubles
double Double::add(double d)
{
    return this->doub + d;
}
double Double::sub(double d)
{
    return this->doub - d;
}
double Double::mul(double d)
{
    return this->doub * d;
}
double Double::div(double d)
{
    return this->doub / d;
}
// w/ Integers
double Double::add(Integer i)
{
    return this->doub + i.toInt();
}
double Double::sub(Integer i)
{
    return this->doub - i.toInt();
}
double Double::mul(Integer i)
{
    return this->doub * i.toInt();
}
double Double::div(Integer i)
{
    return this->doub / i.toInt();
}

//Constructors
Double::Double()
{
    this->doub = 0.0;
}
Double::Double(Double &d)
{
    this->doub = d.doub;
}
Double::Double(double d)
{
    this->doub = d;
}
Double::Double(Integer &i)
{
    this->doub = i.toInt();
}

