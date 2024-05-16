#include "warship.h"
int Cwarship::my_init(void *p)
{
	this->name = "Cwarship";
	this->alias = "warship";
	return 0;
}

Cwarship::Cwarship()
{
	this->my_init();
}

Cwarship::~Cwarship()
{

}

#ifndef WARSHIP_TEST
#define WARSHIP_TEST 0//1
#endif

#if WARSHIP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
