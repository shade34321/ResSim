#include "party.h"

party::party(int numPeople){
	people = numPeople;
}
int party::getPeople(){
	return people;
}

void party::setPeople(int p){
	people = p;
}

bool party::isWaiting(){
	return waiting;
}

void party::setWaiting(bool w){
	waiting = w;
}

void party::setWaitTime(int t){
		waitTime = t;
}

int party::getwaitTime(){
	return waitTime;
}

void party::decrement(){
	waitTime--;
}