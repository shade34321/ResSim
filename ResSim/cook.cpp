#include "cook.h"

/**
	To figure out the cook time. It takes a random time based off of how busy they are. If they aren't very busy, 1, then they should be able to output orders in the alloted time.
	As they get busier the cooks take longer to cook the food.
**/
int cook::cookTime(int level, int avg){
	int t;
    random::random r;

	switch(level){
		case 1:
			t = r(avg);
			break;
		case 2:
			t = r(10) + avg;
			break;
		case 3:
			t = r(20) + avg;
		default:
			t = r(35) + avg;
	}

	return t;
}