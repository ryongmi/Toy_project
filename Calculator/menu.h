#ifndef _MENU_H_
#define _MENU_H_

#include <vector>
#include "storage.h"

class Menu
{
private:
    std::vector<Storage> menu;
public:
    Menu();
    ~Menu();
    void menu_select();
    void menu_add();
    void menu_delete();
    void menu_search() const;
    void total();
    void menu_quit();
};





#endif