#ifndef menu_h
#define menu_h

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include "restaurant.h"
class menu{
private:
    int choice;
    restaurant * r;
    
protected:

public:
    menu();
    restaurant * startMenu();
    void interactiveMenu();
    void fileMenu();
};

#endif