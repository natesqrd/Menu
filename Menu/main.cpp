#include <iostream>
#include "Integer.h"
#include "Double.h"
#include "Menu.h"

using namespace std;

Menu m;

void addInt(Integer a, Integer b);
void subInt();
void mulInt();
void divInt();

void addDouble();
void subDouble();
void mulDouble();
void divDouble();

void Exit();

int main()
{
    int num1, num2;
    Integer a, b;
    cout << "Enter in two integers" << endl;
    cin >> num1 >> num2;
    a.equals(num1);
    b.equals(num2);

    m.addMenu("1. Add", addInt(a,b));

    m.runMenu();


    return 0;
}

void addInt(Integer a, Integer b)
{
    cout << a.add(b) << endl;
    m.waitKey();
}
void subInt()
{

    m.waitKey();
}
void mulInt()
{

    m.waitKey();
}
void divInt()
{

    m.waitKey();
}

void addDouble()
{

    m.waitKey();
}
void subDouble()
{

    m.waitKey();
}
void mulDouble()
{

    m.waitKey();
}
void divDouble()
{

    m.waitKey();
}

void Exit()
{
    cout << "Goodbye" << endl;
    exit(0);
}

