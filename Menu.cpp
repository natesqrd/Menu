#include <iostream>
#include <cstdlib>
//#include <string>
//#include <vector>
#include "Menu.h"
using namespace std;

Menu::Menu()
:count(0)
{

}
void Menu::addMenu(string desc, void (*f)())
{
    
        this->mi[count].func = f;
        this->mi[count].descript = desc;
        
    
}
void Menu::runMenu()
{
    for( ; ; )
    {
        system("CLS");
        for(int i = 0; i < count; i++)
        {
            cout << this->mi[i].descript << endl;
        }
        runSelection();
    }
}
void Menu::runSelection()
{
    int select;

    cin >> select;
    if(select <= count)
        this->mi[select-1].func();
}
void Menu::waitKey()
{
    getchar();
}

