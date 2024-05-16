#include "ocean_about.h"
int Cocean_about::my_init(void *p)
{
	this->name = "Cocean_about";
	this->alias = "ocean_about";
	return 0;
}

Cocean_about::Cocean_about()
{
	this->my_init();
}

Cocean_about::~Cocean_about()
{

}

#ifndef OCEAN_ABOUT_TEST
#define OCEAN_ABOUT_TEST 0//1
#endif

#if OCEAN_ABOUT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
