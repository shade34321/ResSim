#include "random.h"

random::random(){
    srand((unsigned)time(0));
}

unsigned int random::operator()(int m){
	unsigned int randNumber = rand();

	return randNumber % m;
}