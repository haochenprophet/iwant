#include "home_pet.h"
int Chome_pet::my_init(void *p)
{
	this->name = "Chome_pet";
	this->alias = "home_pet";
	return 0;
}

Chome_pet::Chome_pet()
{
	this->my_init();
}

Chome_pet::~Chome_pet()
{

}

#ifndef HOME_PET_TEST
#define HOME_PET_TEST 0//1
#endif

#if HOME_PET_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
