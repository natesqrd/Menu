#include <iostream>
#include "Integer.h"
#include "Double.h"
#include "Menu.h"

using namespace std;

Menu m;

void func1();
void func2();
void func3();
void Exit();

int main()
{

    return 0;
}

void func1()
{
    cout << "Hello from function 1" << endl;
    m.waitKey();
}
void func2()
{
    cout << "Hello from function 2" << endl;
    m.waitKey();
}
void func3()
{
    cout << "Hello from function 3" << endl;
    m.waitKey();
}
void Exit()
{
    cout << "Goodbye" << endl;
    exit(0);
}

