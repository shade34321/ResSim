#ifndef party_h
#define party_h

#include <iostream>

class party{
private:
	int people;
	int waitTime;
	bool waiting;	

public:
	party(int);
	int getPeople();
	void setPeople(int);
	bool isWaiting();
	void setWaiting(bool);
	void setWaitTime(int);
	int getwaitTime();
    
	void decrement();
};

#endif