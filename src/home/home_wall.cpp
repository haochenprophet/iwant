#include "home_wall.h"
int Chome_wall::my_init(void *p)
{
	this->name = "Chome_wall";
	this->alias = "home_wall";
	return 0;
}

Chome_wall::Chome_wall()
{
	this->my_init();
}

Chome_wall::~Chome_wall()
{

}

#ifndef HOME_WALL_TEST
#define HOME_WALL_TEST 0//1
#endif

#if HOME_WALL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
