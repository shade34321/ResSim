#include "table.h"

table::table(int seats){
    seats = seats;
	empty = true;
}

bool table::isEmpty(){
	return empty;
}

void table::setServer(server s){
    s = s;
}

server table::getServer(){
    return s;
}

void table::getSeats(){
    return seats;
}

