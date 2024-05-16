#include "warship_cabin.h"
int Cwarship_cabin::my_init(void *p)
{
	this->name = "Cwarship_cabin";
	this->alias = "warship_cabin";
	return 0;
}

Cwarship_cabin::Cwarship_cabin()
{
	this->my_init();
}

Cwarship_cabin::~Cwarship_cabin()
{

}

#ifndef WARSHIP_CABIN_TEST
#define WARSHIP_CABIN_TEST 0//1
#endif

#if WARSHIP_CABIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
