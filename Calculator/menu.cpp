#include "menu.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Menu::Menu() {
}

Menu::~Menu() {
}

void Menu::menu_select() {
    cout<<"wellcome"<<endl;

    int coise_number;

    do{
        cout<<"\nSelect the list you want."<<endl;
        cout<<"\n1. Add number"<<endl;
        cout<<"2. Delete number"<<endl;
        cout<<"3. Search numbers"<<endl;
        cout<<"0. Quit"<<endl;
        cout<<"\nplz coise : ";
    
        cin >> coise_number;

        switch (coise_number)
        {
        case 1:
            menu_add();
            break;
        case 2:
            menu_delete();
            break;
        case 3:
            menu_search();
            break;
        case 0:
            menu_quit();
            break;
        default:
            cout<<"Invalid selection. Please select again."<<endl;
            break;
        }
    }while (coise_number != 0);
    
}

void Menu::menu_add() {
    string name;
    int num;
    cin>>name>>num;
    Storage source(name, num);
    menu.push_back(source);
}

void Menu::menu_delete(){
    string name;
    cin>>name;
    int i{0};
    for (Storage &view: menu){
        if(view.get_name() == name)
            menu.erase(menu.begin() + i);
        i++;
    }
}

void Menu::menu_search() const{
    cout<<endl;
    if(menu.size() == 0)
        cout<<"Sorry, no menu to display"<<endl;
    else {
        for (const Storage &view: menu)
            view.display();
    }
}

void Menu::menu_quit() {
    cout<<"\nGood Bye!!"<<endl;
}