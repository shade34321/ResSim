#ifndef table_h
#define table_h

#include <iostream>
#include "party.h"
#include "server.h"

class table{
private:
	party p;
	server s;
	bool empty;
protected:

public:
	table();
	bool isEmpty();
};

#endif