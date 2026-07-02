#ifndef MENU_H
#define MENU_H

#include "MenuItem.h"

#include <vector>
#include <string>

class Bill;     // Forward declaration
class Menu
{
private:

    std::vector<MenuItem> items;

public:

    bool loadMenu(const std::string &filename);

    void displayMenu();

    void orderFood(Bill &bill);
     
    void saveMenu(const std::string &filename);

};

#endif