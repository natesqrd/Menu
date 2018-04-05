#include <iostream>
#include "Integer.h"
#include "Double.h"
#include "Menu.h"

using namespace std;

void ArithInt(Integer a, Integer b);
void ArithDouble(Double c, Double d);
int main()
{
    Integer a, b(3);
    Integer e(2);
    a.equals(3);
    b.equals(-4);
    Double c, d;

    //Integer to Double


    c.equals(3.5);
    d.equals(6.5);
    Double f(a), num(3.4), test(c);
    cout << test.toDouble() << endl;
    cout << num.toDouble() << endl;
    cout << f.toDouble() << endl;
    ArithInt(a, b);

    ArithInt(b, a);
    ArithDouble(c, d);
    ArithDouble(d, c);
    return 0;
}
void ArithInt(Integer a, Integer b)
{
    cout << "The int: " << a.toInt() << " " << endl;
    cout << "Add: " << a.add(b) << endl;
    cout << "Sub: " << a.sub(b) << endl;
    cout << "Mul: " << a.mul(b) << endl;
    cout << "Div: " << a.div(b) << endl;
    cout << endl;
}
void ArithDouble(Double c, Double d)
{
    cout << "The double: " << c.toDouble() << " " << endl;
    cout << "Add: " << c.add(d) << endl;
    cout << "Sub: " << c.sub(d) << endl;
    cout << "Mul: " << c.mul(d) << endl;
    cout << "Div: " << c.div(d) << endl;
    cout << endl;
}

