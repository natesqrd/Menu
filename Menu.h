#ifndef MENU
#define MENU
#include <string>
#include <vector>

using std::string;
using std::vector;
const int MAXCOUNT = 20;
struct menuItem
{
    void(*func)();
    string descript;
};
class Menu
{
private:
    //menuItem mi[MAXCOUNT];
    vector <menuItem> mi;
    int count;
    void runSelection();
public:
    Menu();
    void addMenu(string desc, void(*f)());
    void runMenu();
    void waitKey();
};
#endif

