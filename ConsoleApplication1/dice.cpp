#include "dice.h"
#include <cstdio>
#include <ctime>
#include <cstdlib>


int randomValue(const int range) {
	srand(static_cast<unsigned int>(time(0)));

	int throwValue = rand();

	return throwValue % range;


}



