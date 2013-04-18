//
//  main.cpp
//  ResSim
//
//  Created by Shade Alabsa on 4/10/13.
//  Copyright (c) 2013 Shade Alabsa. All rights reserved.
//

#include <iostream>
#include "menu.h"
#include "restaurant.h"

int main(int argc, const char * argv[])
{

    restaurant * r;
    
    menu m = new menu();
    r = m.startMenu();
    return 0;
}

