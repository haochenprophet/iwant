#include "home_floor.h"
int Chome_floor::my_init(void *p)
{
	this->name = "Chome_floor";
	this->alias = "home_floor";
	return 0;
}

Chome_floor::Chome_floor()
{
	this->my_init();
}

Chome_floor::~Chome_floor()
{

}

#ifndef HOME_FLOOR_TEST
#define HOME_FLOOR_TEST 0//1
#endif

#if HOME_FLOOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
