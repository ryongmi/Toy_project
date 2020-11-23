#include<iostream>
#include<vector>
#include "storage.h"
#include "menu.h"
using namespace std;

int main() {
    menu_select();

    vector<storage> savedata;

    savedata.push_back(storage{"TurTle", 20, 10});

    for (const auto &view: savedata)
        view.display();

    return 0;
}