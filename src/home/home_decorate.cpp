#include "home_decorate.h"
int Chome_decorate::my_init(void *p)
{
	this->name = "Chome_decorate";
	this->alias = "home_decorate";
	return 0;
}

Chome_decorate::Chome_decorate()
{
	this->my_init();
}

Chome_decorate::~Chome_decorate()
{

}

#ifndef HOME_DECORATE_TEST
#define HOME_DECORATE_TEST 0//1
#endif

#if HOME_DECORATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
