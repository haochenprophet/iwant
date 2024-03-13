#include "warship_torpedo.h"
int Cwarship_torpedo::my_init(void *p)
{
	this->name = "Cwarship_torpedo";
	this->alias = "warship_torpedo";
	return 0;
}

Cwarship_torpedo::Cwarship_torpedo()
{
	this->my_init();
}

Cwarship_torpedo::~Cwarship_torpedo()
{

}

#ifndef WARSHIP_TORPEDO_TEST
#define WARSHIP_TORPEDO_TEST 0//1
#endif

#if WARSHIP_TORPEDO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
