#ifndef server_h
#define server_h

#include <iostream>
#include <vector>
#include "party.h"

class server{
	private:
		int skill;
		int numTables;
        bool busy;
		std::vector<party> guests;
    
public:
	server(int, int);
	void addParty(party);
	int orderTime(party);
	bool canHandleAnother();
    bool isBusy();
};

#endif