#pragma once

#include <stdlib.h>
#include <time.h>

int Randomizer(int &n, int x, int y) {
	srand(time(NULL));
	n = rand() % (y - x) + x;
	return n;
}