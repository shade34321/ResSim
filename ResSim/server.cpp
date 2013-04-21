#include "server.h"

server::server(int s, int n){
	skill = s;
	numTables = n;
}

void server::addParty(party p){
	guests.push_back(p);
}

int server::orderTime(party p){
	int t;

	switch (skill){
		case 1:
			t = 2*p.getPeople();
			break;
		case 2:
			t = 3*p.getPeople();
			break;
		case 3:
			t = 4*p.getPeople();
			break;
		case 4:
			t = 5*p.getPeople();
			break;
		default:
			t = 6*p.getPeople();
			break;
	}

	return t;
}

bool server::canHandleAnother(){
	return (guests.size()<numTables);
}
bool server::isBusy(){
    return busy;
}
