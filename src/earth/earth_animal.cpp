#include "earth_animal.h"
int Cearth_animal::my_init(void *p)
{
	this->name = "Cearth_animal";
	this->alias = "earth_animal";
	return 0;
}

Cearth_animal::Cearth_animal()
{
	this->my_init();
}

Cearth_animal::~Cearth_animal()
{

}

#ifndef EARTH_ANIMAL_TEST
#define EARTH_ANIMAL_TEST 0//1
#endif

#if EARTH_ANIMAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
