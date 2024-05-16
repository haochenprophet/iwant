#include "home_space.h"
int Chome_space::my_init(void *p)
{
	this->name = "Chome_space";
	this->alias = "home_space";
	return 0;
}

Chome_space::Chome_space()
{
	this->my_init();
}

Chome_space::~Chome_space()
{

}

#ifndef HOME_SPACE_TEST
#define HOME_SPACE_TEST 0//1
#endif

#if HOME_SPACE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
