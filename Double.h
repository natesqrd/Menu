#ifndef Double_h
#define Double_h
#include "Integer.h"
class Double
{
private:
    double doub;
public:
    double toDouble();

    void equals(double d);
    double add(Double d);
    double sub(Double d);
    double mul(Double d);
    double div(Double d);
    //Overloaded Functions x/ doubles
    double add(double d);
    double sub(double d);
    double mul(double d);
    double div(double d);
    // w/ Integers
    double add(Integer i);
    double sub(Integer i);
    double mul(Integer i);
    double div(Integer i);

    //Constructors
    Double();
    Double(Double &d);
    Double(double d);
    Double(Integer &i);
};



#endif

