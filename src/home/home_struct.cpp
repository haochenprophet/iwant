#include "home_struct.h"
int Chome_struct::my_init(void *p)
{
	this->name = "Chome_struct";
	this->alias = "home_struct";
	return 0;
}

Chome_struct::Chome_struct()
{
	this->my_init();
}

Chome_struct::~Chome_struct()
{

}

#ifndef HOME_TEST
#define HOME_TEST 0//1
#endif

#if HOME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
