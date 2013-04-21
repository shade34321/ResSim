#ifndef table_h
#define table_h

#include <iostream>
#include "party.h"
#include "server.h"

class table{
private:
    int seats;
	party p;
	server s;
	bool empty;
protected:

public:
	table(int);
	bool isEmpty();
    void setServer(server);
    server getServer();
    void setParty(party);
    party getParty();
    int getSeats();
};

#endif