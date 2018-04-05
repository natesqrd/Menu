//Fraction.cpp
#include <iostream>
#include "Fraction.h"
using namespace std;
//Journal 2 added vvvvvvvvvvvvvvvvvvvvvv
Fraction::Fraction() 
{
    this->setFraction(1, 1);
}
Fraction::Fraction(int num, int den)
{
    this->setFraction(num, den);
}
Fraction::Fraction(string frac)
{
    string space = " ";
    string n = frac.substr(0, frac.find(space));
    string d = frac.substr(frac.find(space) + 1, frac.length());
    int num = stoi(n);
    int den = stoi(d);
    this->setFraction(num, den);
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


//Journal 1 added ########################
void Fraction::setFraction(int n, int d)
{
    this->num = n;
    this->den = d;
}
Fraction Fraction::add(const Fraction &f)
{
    Fraction tmp;
    tmp.num = (this->num * f.den) + (f.num * this->den);
    tmp.den = f.den * this->den;
    return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
    Fraction tmp;
    tmp.num =(this->num * f.den) - (f.num * f.den);
    tmp.den = f.den * this->den;
    return tmp;
}
Fraction Fraction::mul(const Fraction &f)
{
    Fraction tmp;
    tmp.num = this->num * f.num ;
    tmp.den = this->den * f.den;
    return tmp;
}
Fraction Fraction::div(const Fraction &f)
{
    Fraction tmp;
    tmp.num = this->num * f.den;
    tmp.den = this->den * f.num;

    //In case of inversion
    if(tmp.den<0)
    {
        tmp.num *= -1;
        tmp.den *= -1;
    }
    return tmp;
}
void Fraction::printFraction()
{
    cout << this->num << "/" << this->den << endl;
}

//Journal 1 end #################################

//Journal 3 added################################
Fraction Fraction::operator + (const Fraction &f)
{
    return this->add(f);
}
Fraction Fraction::operator - (const Fraction &f)
{
    return this->sub(f);
}
Fraction Fraction::operator * (const Fraction &f)
{
    return this->mul(f);
}
Fraction Fraction::operator / (const Fraction &f)
{
    return this->div(f);
}
Fraction &Fraction::operator =(const Fraction &f)
{
    this->setFraction(f.getNum(), f.getDen());
    return *this;
}

int Fraction::getNum() const
{
    return this->num;
}
int Fraction::getDen() const
{
    return this->den;
}
//#################################################
