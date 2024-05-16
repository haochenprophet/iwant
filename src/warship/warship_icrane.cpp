#include "warship_icrane.h"
int Cwarship_icrane::my_init(void *p)
{
	this->name = "Cwarship_icrane";
	this->alias = "warship_icrane";
	return 0;
}

Cwarship_icrane::Cwarship_icrane()
{
	this->my_init();
}

Cwarship_icrane::~Cwarship_icrane()
{

}

#ifndef WARSHIP_ICRANE_TEST
#define WARSHIP_ICRANE_TEST 0//1
#endif

#if WARSHIP_ICRANE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
