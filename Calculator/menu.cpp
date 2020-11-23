#include "menu.h"
#include<iostream>
using namespace std;

void menu_select() {
    cout<<"wellcome"<<endl;
    cout<<"1. Add number"<<endl;
    cout<<"2. Delete number"<<endl;
    cout<<"3. Search numbers"<<endl;
    cout<<"0. Quit"<<endl;

    int coise_number;

    do{
        cout<<"plz coise : ";
    
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
            cout<<"Invalid selection. Please select again.";
            break;
        }
    }while (coise_number != 0);
    
}



void menu_add();
void menu_delete();
void menu_search();
void menu_quit();