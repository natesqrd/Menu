//Fraction.h
#ifndef Fraction_h
#define Fraction_h

class Fraction
{
private:
    int num;
    int den;
public:
    void setFraction(int n, int d);
    Fraction add(const Fraction &f);
    Fraction sub(const Fraction &f);
    Fraction mul(const Fraction &f);
    Fraction div(const Fraction &f);

    int getNum() const;
    int getDen() const;

    void printFraction();

    //Journal 2 added vvvvvvvvvvvvv
    //Constructors
    Fraction();
    Fraction(int num, int den);
    Fraction(std::string frac);
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    //Journal 3 added
    //Operator Overload

    Fraction operator + (const Fraction &f);
    Fraction operator - (const Fraction &f);
    Fraction operator * (const Fraction &f);
    Fraction operator / (const Fraction &f);

    Fraction &operator =(const Fraction &f);
};


#endif /* Fraction_h */

