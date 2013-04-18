#ifndef random_h
#define random_h

#include <iostream>
#include <stdlib.h>
#include <time.h>

class random{
public:
    random();
	unsigned int operator()(int);
};

#endif