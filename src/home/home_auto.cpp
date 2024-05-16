#include "home_auto.h"
int Chome_auto::my_init(void *p)
{
	this->name = "Chome_auto";
	this->alias = "home_auto";
	return 0;
}

Chome_auto::Chome_auto()
{
	this->my_init();
}

Chome_auto::~Chome_auto()
{

}

#ifndef HOME_AUTO_TEST
#define HOME_AUTO_TEST 0//1
#endif

#if HOME_AUTO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
