#include "warship_artillery.h"
int Cwarship_artillery::my_init(void *p)
{
	this->name = "Cwarship_artillery";
	this->alias = "warship_artillery";
	return 0;
}

Cwarship_artillery::Cwarship_artillery()
{
	this->my_init();
}

Cwarship_artillery::~Cwarship_artillery()
{

}

#ifndef WARSHIP_ARTILLERY_TEST
#define WARSHIP_ARTILLERY_TEST 0//1
#endif

#if WARSHIP_ARTILLERY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
