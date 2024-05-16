#include "ocean_animal.h"
int Cocean_animal::my_init(void *p)
{
	this->name = "Cocean_animal";
	this->alias = "ocean_animal";
	return 0;
}

Cocean_animal::Cocean_animal()
{
	this->my_init();
}

Cocean_animal::~Cocean_animal()
{

}

#ifndef OCEAN_ANIMAL_TEST
#define OCEAN_ANIMAL_TEST 0//1
#endif

#if OCEAN_ANIMAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
